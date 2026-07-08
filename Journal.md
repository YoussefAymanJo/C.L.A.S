# title: C.L.A.S

author: Youssef Ayman Mohamed

 description: Closed feedback greenhouse system for lettuce and pepper plants in Egypt. Controlled by ESP.
 
 created_at: "2026-07-3"

## Entry 1 
created at:2026-7-3

### Content 
During this session, I  workedmainly onon searching and sketch down worflow and used materials. Firstly, I used the draw.io app to sketch class materials. Firstly,  I started by adding the MCU, which is esp s3, then I went to sensors, which are DHT22 & ldr, and soil moisture. After that,  I added actuators for each parameter: 2 Peltier cooling kits for high temp and a vice versa heat lamp for low temp. Then, for humidity, I added a humidifier piezo for low humidity and a fan to release air when it increases.
Then,  a water pump for watering when moisture decreases and a grow light in case of absence of sunlight.

After that, I added a power source. I used a 20A power supply after calculating the usage of each part and used a step-down to 5V to 5v provide power for the ESP and sensors.  Then, the firmware will be a tkinter app and firebase as feedback for the user. Finally, I, i worked in schemat addingdin symbols available on KiCad such as Peltier & ESP & fan.
<img width="804" height="333" alt="Screenshot 2026-07-07 150521" src="https://github.com/user-attachments/assets/7aabd835-2f5e-40d5-8a5b-441014692ae8" />
<img width="498" height="205" alt="Screenshot 2026-07-08 211201" src="https://github.com/user-attachments/assets/fc3f8048-cfae-469e-bf2f-1db49bb23ed4" />

### Recording (46 min) :

https://lapse.hackclub.com/timelapse/fNMql2ZkObp6
