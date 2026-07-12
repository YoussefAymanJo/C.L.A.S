// libraries importing
#include "DHT.h"
#include <WiFi.h>
#include <Firebase_ESP_Client.h>
#include "addons/TokenHelper.h"
#include "addons/RTDBHelper.h"

// firebase realtime
#define WIFI_SSID "***********"
#define WIFI_PASSWORD "*************"
#define FIREBASE_URL "https://console.firebase.google.com/project/clas-59589/database/clas-59589-default-rtdb/data"
#define FIREBASE_SECRET "**************"

// sensors definition
#define DHTPIN 4
#define DHTTYPE DHT22
#define LDR_pin 2
#define Soil_pin 0
#define water_level_pin 18

// power controllers definition
#define peltier1 6
#define peltier2 8
#define heatlamp 10
#define Humidifier 12
#define waterpump 14
#define fan_h 16
#define growlight 35
// var ranges
struct ranges
{
  int templow;
  int temphigh;
  int humidlow;
  int humidhigh;
  int soillow;
  int soilhigh;
  int lightlow;
  int lighthigh;
}
// lettuce
const ranges lettuce = {
    15, 24,
    60, 80,
    2100, 1400,
    1500, 700};
// pepper
const ranges pepper = {
    20, 30,
    55, 75,
    2100, 1400,
    1500, 700};

DHT dht(DHTPIN, DHTTYPE);
// firebase
FirebaseData fbdo;
FirebaseAuth auth;
FirebaseConfig config;
unsigned long sendDataPrevMillis = 0;
// status actuctors
int pel1 = 0, pel2 = 0, fan = 0, lamp = 0, light = 0, humid = 0, pump = 0;
void setup()
{
  Serial.begin(115200);
  dht.begin();
  pinMode(LDR_pin, INPUT);
  pinMode(Soil_pin, INPUT);
  PinMode(water_level_pin, INPUT);
  PinMode(peltier1, OUTPUT);
  PinMode(peltier2, OUTPUT);
  PinMode(heatlamp, OUTPUT);
  pinMode(Humidifier, OUTPUT);
  pinMode(waterpump, OUTPUT);
  pinMode(fan_h, OUTPUT);
  pinMode(growlight, OUTPUT);
  // wifi connection
  Wifi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(300);
    Serial.print(".");
  }
  config.database_url = FIREBASE_URL;
  config.signer.tokens.legacy_token = FIREBASE_SECRET;
  Firebase.begin(&config, &auth);
  Firebase.reconnectWiFi(true);
  delay(5000);
}

void loop()
{
  // plant type
  int planttype = 0;
  if (Firebase.RTDB.getInt(&fbdo, "/greenhouse/plant_type"))
  {
      planttype = fbdo.intData();
  }
  double temperature = dht.readTemperature();
  double Humidty = dht.readHumidty();
  int light = analogRead(LDR_pin);
  float soilmoisture = analogRead(Soil_pin);
  int waterlevel = analogRead(water_level_pin);
  float waterprecent = (waterlevel / 4095.0) * 100;

  serial.print("Temperature :")
  serial.print(temperature);
  serial.print("Celsuis / Humidty : ");
  serial.print(" % / Soil Moisture : ");
  serial.print(soilmoisture);
  serial.print(" % / Light Amount : ");
  serial.print(light);
  serial.print(" % / Water level : ");
  serial.print(waterlevel);
  serial.print(" % ");
  if (planttype == 0)
  {
    // temperature
    if (temperature > lettuce.temphigh)
    {
      analogWrite(peltier1, 255);
      analogWrite(peltier2, 255);
      analogWrite(heatlamp, 0);
      pel1 = 1, pel 2 = 1, lamp = 0;
    }
    else if (temperature < lettuce.templow)
    {
      analogWrite(peltier1, 0);
      analogWrite(peltier2, 0);
      analogWrite(heatlamp, 255);
      pel1 = 0, pel 2 = 0, lamp = 1;
    }
    else
    {
      analogWrite(peltier1, 0);
      analogWrite(peltier2, 0);
      analogWrite(heatlamp, 0);
      pel1 = 0, pel 2 = 0, lamp = 0;
    }
    // Humidty
    if (Humidty > lettuce.humidhigh)
    {
      analogWrite(Humidifier, 0);
      analogWrite(fan, 255);
      humid = 0, fan = 1;
    }
    else if (Humidty < lettuce.humidlow)
    {
      analogWrite(fan, 0);
      analogWrite(Humidifier, 255);
      humid = 1, fan = 0;
    }
    else
    {
      analogWrite(fan, 0);
      analogWrite(Humidifier, 0);
      humid = 0, fan = 0;
    }
    // Soil
    if (soilmoisture > lettuce.soilhigh)
    {
      analogWrite(waterpump, 0);
      pump = 0;
    }
    else if (temperature < lettuce.soillow)
    {
      analogWrite(waterpump, 255);
      pump = 1;
    }
    else
    {
      analogWrite(waterpump, 0);
      pump = 0;
    }
    // Light
    if (light > lettuce.lighthigh)
    {
      analogWrite(growlight, 255);
      light = 1;
    }
    else if (light < lettuce.lightlow)
    {
      analogWrite(growlight, 0);
      light = 0;
    }
    else
    {
      analogWrite(growlight, 0);
      light = 0;
    }
  }
  else if (planttype == 1)
  {
    // temperature
    if (temperature > pepper.temphigh)
    {
      analogWrite(peltier1, 255);
      analogWrite(peltier2, 255);
      analogWrite(heatlamp, 0);
      pel1 = 1, pel 2 = 1, lamp = 0;
    }
    else if (temperature < pepper.templow)
    {
      analogWrite(peltier1, 0);
      analogWrite(peltier2, 0);
      analogWrite(heatlamp, 255);
      pel1 = 0, pel 2 = 0, lamp = 0;
    }
    else
    {
      analogWrite(peltier1, 0);
      analogWrite(peltier2, 0);
      analogWrite(heatlamp, 0);
      pel1 = 0, pel 2 = 0, lamp = 0;
    }
    // Humidty
    if (Humidty > pepper.humidhigh)
    {
      analogWrite(Humidifier, 0);
      analogWrite(fan, 255);
      humid = 0, fan = 1;
    }
    else if (Humidty < pepper.humidlow)
    {
      analogWrite(fan, 0);
      analogWrite(Humidifier, 255);
      humid = 1, fan = 0;
    }
    else
    {
      analogWrite(fan, 0);
      analogWrite(Humidifier, 0);
      humid = 0, fan = 0;
    }
    // Soil
    if (soilmoisture > pepper.soilhigh)
    {
      analogWrite(waterpump, 0);
      pump = 0;
    }
    else if (temperature < pepper.soillow)
    {
      analogWrite(waterpump, 255);
      pump = 1;
    }
    else
    {
      analogWrite(waterpump, 0);
      pump = 0;
    }
    // Light
    if (light > pepper.lighthigh)
    {
      analogWrite(growlight, 255);
      light = 1;
    }
    else if (light < pepper.lightlow)
    {
      analogWrite(growlight, 0);
      light = 0;
    }
    else
    {
      analogWrite(growlight, 0);
      light = 0;
    }
  }
  else
  {
    // manual mode
    String controlBase = "/gardenConfig/actuators/";
    if (Firebase.RTDB.getBool(&fbdo, controlBase + "peltier1"))
      analogWrite(peltier1, fbdo.boolData() ? 255 : 0);
    if (Firebase.RTDB.getBool(&fbdo, controlBase + "peltier2"))
      analogWrite(peltier2, fbdo.boolData() ? 255 : 0);
    if (Firebase.RTDB.getBool(&fbdo, controlBase + "heatlamp"))
      analogWrite(heatlamp, fbdo.boolData() ? 255 : 0);
    if (Firebase.RTDB.getBool(&fbdo, controlBase + "humidifier"))
      analogWrite(humidifier, fbdo.boolData() ? 255 : 0);
    if (Firebase.RTDB.getBool(&fbdo, controlBase + "waterpump"))
      analogWrite(waterpump, fbdo.boolData() ? 255 : 0);
    if (Firebase.RTDB.getBool(&fbdo, controlBase + "fan"))
      analogWrite(fan, fbdo.boolData() ? 255 : 0);
    if (Firebase.RTDB.getBool(&fbdo, controlBase + "growlight"))
      analogWrite(growlight, fbdo.boolData() ? 255 : 0);
  }
  // update firebase
  FirebaseJson updateData;
  updateData.set("sensors/temperature", temperature);
  updateData.set("sensors/humidity", humidity);
  updateData.set("sensors/light", light);
  updateData.set("sensors/soil_moisture", soilmoisture);
  updateData.set("sensors/water_level", waterlevel);
  updateData.set("sensors/water_percent", waterpercent);

  if (planttype != 3)
  {
    updateData.set("actuators/peltier1", pel1);
    updateData.set("actuators/peltier2", pel2);
    updateData.set("actuators/heatlamp", lamp);
    updateData.set("actuators/humidifier", humid);
    updateData.set("actuators/waterpump", pump);
    updateData.set("actuators/fan", fan);
    updateData.set("actuators/growlight", light);
  }
  if (Firebase.RTDB.updateNode(&fbdo, "/greenhouse", &updateData))
  {
    Serial.println("Firebase updated successfully.");
  }
  else
  {
    Serial.println("Firebase update failed: " + fbdo.errorReason());
  }

  delay(30000);
}