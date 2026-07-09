# title: C.L.A.S

author: Youssef Ayman Mohamed

 description: Closed feedback greenhouse system for lettuce and pepper plants in Egypt. Controlled by ESP.
 
 created_at: "2026-07-3"

## Entry 1 
created at:2026-7-3

### Content 
During this session, I  workedmainly onon searching and sketch down worflow and used materials. Firstly, I used the draw.io app to sketch class materials. Firstly,  I started by adding the MCU, which is esp s3, then I went to sensors, which are DHT22 & ldr, and soil moisture. After that,  I added actuators for each parameter: 2 Peltier cooling kits for high temp and a vice versa heat lamp for low temp. Then, for humidity, I added a humidifier piezo for low humidity and a fan to release air when it increases.
Then,  a water pump for watering when moisture decreases and a grow light in case of absence of sunlight.

After that, I added a power source. I used a 20A power supply after calculating the usage of each part and used a step-down to 5V to 5v provide power for the ESP and sensors.  Then, the firmware will be a tkinter app and firebase as feedback for the user. Finally, I worked in schematics adding symbols available on KiCad, such as Peltier & ESP & fan.
<img width="804" height="333" alt="Screenshot 2026-07-07 150521" src="https://github.com/user-attachments/assets/7aabd835-2f5e-40d5-8a5b-441014692ae8" />
<img width="498" height="205" alt="Screenshot 2026-07-08 211201" src="https://github.com/user-attachments/assets/fc3f8048-cfae-469e-bf2f-1db49bb23ed4" />

### Recording (46 min) :

https://lapse.hackclub.com/timelapse/fNMql2ZkObp6

## Entry 2
created at:2026-7-5

### Content 
During this session, I worked mainly on the schematic.
Firstly, some parts in doennot availabe their symbol in KiCad or even on SnapMagic. So I watched a tutorial on creating symbols in KiCad.
After that, I started making a soil moisture sensor symbol and found out its pinout. I faced some struggles as it was  my first one.
Then,ldr sensor, after searching about its pinout.
Then, I made power parts, which are a buck converter and a power supply, in the same way.
<img width="808" height="615" alt="Screenshot 2026-07-09 143450" src="https://github.com/user-attachments/assets/bff3a41d-e3ba-42d5-88a5-9433114c5a59" />
<img width="496" height="724" alt="Screenshot 2026-07-09 143501" src="https://github.com/user-attachments/assets/9c178637-91d5-4587-889c-3bb0a210c40c" />
<img width="882" height="410" alt="Screenshot 2026-07-09 143507" src="https://github.com/user-attachments/assets/f2b5588d-2d0f-473b-b657-08f0e6c5f2ed" />
<img width="484" height="713" alt="Screenshot 2026-07-09 143511" src="https://github.com/user-attachments/assets/a75f28a5-8099-462e-9c39-4a44c7b4c57a" />
<img width="644" height="385" alt="Screenshot 2026-07-07 150619" src="https://github.com/user-attachments/assets/e0fae8d9-9471-40f4-82c8-b5e42176983d" />

Then, I made a humidifier symbol, as it is primarily piezo. After that, I started wires componets togehter with ESP,a nd organized a bit on the schematic, as sensors, and actuators in different boxes. I wired all sensors to the main GND for the buck. But I found esp s3  symbol & footprint on kicad was have issues, so I downloaded another one from SnapMagic and imported it into KiCad.

<img width="439" height="571" alt="Screenshot 2026-07-09 143455" src="https://github.com/user-attachments/assets/c0f2c5dd-28ef-4a17-a30c-58625369c12a" />

Secondly,working on power controllers,mosfet kit with 2 mosfet and  operate upt to 400w ,was suitable,as it small and faster than relay.I searched on footprint for it alot but nothing founded,so i made first it sybmol,based on its dimensions and it pinout,after,i made it footprint.I searched first for its 3d model,and found it on grabcad.then watching video to made footprint.Finally,i made the footpring based on it dimensions,then attach 3d model,and align pad opening with opens in 3d model.
<img width="1145" height="688" alt="Screenshot 2026-07-09 143521" src="https://github.com/user-attachments/assets/3dff4c8c-5712-488a-b7e0-157d888e6835" />
<img width="1116" height="721" alt="Screenshot 2026-07-07 150610" src="https://github.com/user-attachments/assets/80fb9dd6-91c5-4c58-a68d-a97f24f0dfce" />

thirdly,i worked on esp s3 model,attaching it,then i started adding pin headers for sensors and screw pin for power.then wires them with esp and add their footprint.After that,i worked on power controlles,i found first that pins in symbols not sync with footprint,after several tries,founding errors in numbering of pins in symbol and footprint.after that i started wire power controllers for each aquctors.
<img width="1632" height="673" alt="Screenshot 2026-07-07 150537" src="https://github.com/user-attachments/assets/d8dab772-7bef-403b-863f-556ec2245b85" />

Finaly,i worked description of clas.then making worflow for each parts in system and the process in firmware will be.
<img width="1070" height="757" alt="Screenshot 2026-07-07 150552" src="https://github.com/user-attachments/assets/003b6b4e-83fe-4cf2-91d7-177f04069d63" />

### Recording (4.4 hours) :
https://lapse.hackclub.com/timelapse/867AXAJ3zznD
https://lapse.hackclub.com/timelapse/h2mKk20hOjvF

## Entry 3
created at:2026-7-8

### Content 
During this session, I worked on PCB
Firstly,i add edge cuts forming pcb shape,then i organized componets inside it,cosider the wires.then i started routed pcb,routing mosfets and pin headers with esp32 s3.Then,i create copper area on the top for VCC 5 v and on the back another one for GND.then cehecking drc,after that i added function for each part above it,and sign my name on pcb.
<img width="905" height="383" alt="Screenshot 2026-07-08 103335" src="https://github.com/user-attachments/assets/2d35ef97-2347-4a46-9d3a-5b9a7ad2ae29" />
<img width="875" height="482" alt="Screenshot 2026-07-08 103329" src="https://github.com/user-attachments/assets/501b7398-41b6-41fd-a129-bfc15a161a8a" />
<img width="1025" height="525" alt="Screenshot 2026-07-08 103359" src="https://github.com/user-attachments/assets/4f5353df-2938-4cf6-b6a3-ebc9f216e508" />

### Recording (29 min) :
https://lapse.hackclub.com/timelapse/yJk0d57BnSbP
