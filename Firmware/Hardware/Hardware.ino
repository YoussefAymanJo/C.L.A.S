// libraries importing
#include "DHT.h"

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
#define fan 16
#define growlight 35

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

void setup()
{
  Serial.begin(115200);
  dht.begin();
  pinMode(LDR_pin, INPUT);
  pinMode(Soil_pin, INPUT);
  PinMode(water_level_pin, INPUT);
  delay(5000);
}

void loop()
{
  double temperature = dht.readTemperature();
  double Humidty = dht.readHumidty();
  int light = analogRead(LDR_pin);
  float soilmoisture = analogRead(soilmoisture);
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
  int planttype = 0;
  if (planttype == 0)
  {
    // temperature
    if (temperature > lettuce.temphigh)
    {
      analogWrite(peltier1, 255);
      analogWrite(peltier2, 255);
      analogWrite(heatlamp, 0);
    }
    else if (temperature < lettuce.templow)
    {
      analogWrite(peltier1, 0);
      analogWrite(peltier2, 0);
      analogWrite(heatlamp, 255);
    }
    else
    {
      analogWrite(peltier1, 0);
      analogWrite(peltier2, 0);
      analogWrite(heatlamp, 0);
    }
    // Humidty
    if (Humidty > lettuce.humidhigh)
    {
      analogWrite(Humidifier, 0);
      analogWrite(fan, 255);
    }
    else if (Humidty < lettuce.humidlow)
    {
      analogWrite(fan, 0);
      analogWrite(Humidifier, 255);
    }
    else
    {
      analogWrite(fan, 0);
      analogWrite(Humidifier, 0);
    }
    // Soil
    if (soilmoisture > lettuce.soilhigh)
    {
      analogWrite(waterpump, 0);
    }
    else if (temperature < lettuce.soillow)
    {
      analogWrite(waterpump, 255);
    }
    else
    {
      analogWrite(waterpump, 0);
    }
    // Light
    if (light > lettuce.lighthigh)
    {
      analogWrite(growlight, 255);
    }
    else if (light < lettuce.lightlow)
    {
      analogWrite(growlight, 0);
    }
    else
    {
      analogWrite(growlight, 0);
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
    }
    else if (temperature < pepper.templow)
    {
      analogWrite(peltier1, 0);
      analogWrite(peltier2, 0);
      analogWrite(heatlamp, 255);
    }
    else
    {
      analogWrite(peltier1, 0);
      analogWrite(peltier2, 0);
      analogWrite(heatlamp, 0);
    }
    // Humidty
    if (Humidty > pepper.humidhigh)
    {
      analogWrite(Humidifier, 0);
      analogWrite(fan, 255);
    }
    else if (Humidty < pepper.humidlow)
    {
      analogWrite(fan, 0);
      analogWrite(Humidifier, 255);
    }
    else
    {
      analogWrite(fan, 0);
      analogWrite(Humidifier, 0);
    }
    // Soil
    if (soilmoisture > pepper.soilhigh)
    {
      analogWrite(waterpump, 0);
    }
    else if (temperature < pepper.soillow)
    {
      analogWrite(waterpump, 255);
    }
    else
    {
      analogWrite(waterpump, 0);
    }
    // Light
    if (light > pepper.lighthigh)
    {
      analogWrite(growlight, 255);
    }
    else if (light < pepper.lightlow)
    {
      analogWrite(growlight, 0);
    }
    else
    {
      analogWrite(growlight, 0);
    }
  }
  else
  {
  }
}
