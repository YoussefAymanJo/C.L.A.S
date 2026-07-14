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
Firstly, some parts do not have their symbol in KiCad or even on SnapMagic. So I watched a tutorial on creating symbols in KiCad.
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

## Entry 4
created at:2026-7-9

### Content 
During this session,i worked mainly on pcb enclosure.
firstly,i uploaded pcb  3d model to fusion,then sketck it dimensions,then worked on enclosure sketch ,adding offset and taking parts for m3 screws,
After that,i added mouniting holes in schematic,then assign it footprint.
then,i searched for componetes 3d models on grapcad , power supply,buck ,sensors and actuators.
<img width="1072" height="550" alt="Screenshot 2026-07-14 225038" src="https://github.com/user-attachments/assets/0c67396a-7aa0-4702-a1f4-560c168c2d2e" />

after that i added water level sensor,i searched for its pinout,then making it symbol in kicad, then,update schematic and adding 3 pin headers for sensors,after that update pcb and reroute new headers.then upload pcb model to fusion,but mosfets 3d were absent.So i added them manually.
Then,i assembles pcb & power supply and buck and align them ,then project them to new sketch.then extrude enclosure  by heigth of power supply.then extrude base .after that, sketch mouting holes for m3 screws 5mm.then extrude it.
<img width="633" height="560" alt="Screenshot 2026-07-14 225407" src="https://github.com/user-attachments/assets/daf28956-a52f-4faf-a0ff-16b8a43890d0" />
<img width="910" height="630" alt="Screenshot 2026-07-14 225101" src="https://github.com/user-attachments/assets/46b6f59c-c6a1-4d1f-b2cb-e7c4b5b88a5f" />
<img width="589" height="409" alt="Screenshot 2026-07-14 225120" src="https://github.com/user-attachments/assets/9ea7cb44-9dd1-48a9-804b-04d849c420e7" />

Secondly,I assembled enclosure with parts to check openiin places according to mosfet and power supply.then started sketch  slots on the back and left of enclosure.then cutted it.After that,i searched for ac panel plug 3d model,then uploaded it to enclosure beside power supply.then extrude openinig for it.
After that,i worked on pcb cover,sketched it and extrude it.then i added project text on the top.And tried to add lettuce image but doens't work.then i added it to assembly,then adding m3 5mm srews for pcb and buck and used surface anaylsis for top and right.

Finally, I rendered the enclosure with white to reflect sunlight without increase pcb temperature.
<img width="955" height="543" alt="Screenshot 2026-07-14 225220" src="https://github.com/user-attachments/assets/4e471c23-0197-470d-8caf-0678a6e3597a" />
<img width="1206" height="695" alt="Screenshot 2026-07-14 225231" src="https://github.com/user-attachments/assets/404a6f39-6d51-4fdc-89eb-328352e63a6a" />

### Recording (3 hours & 15 min) :
https://lapse.hackclub.com/timelapse/dNaEws2EPQLG

https://lapse.hackclub.com/timelapse/mTek28ENGT2j

## Entry 5
created at:2026-7-11
### Content 
During this session,i worked mainly on greenhouse assembly.
I started measuring componets dimensions,such as peltier kit and tray.then i started sketch plant tray based on it online dimesions.after that ,i added holes in it and repeated theam accros tray.then extrude it by 4 cm .
<img width="1114" height="650" alt="Screenshot 2026-07-14 233414" src="https://github.com/user-attachments/assets/5ad3d183-9bcc-474e-a094-5b60cb4ff9c8" />
Secondly,i was not had any idea to make greenhouse for first time,so i decided to make it from blocks and assemble them together like lego.at first,i make base block,and it should hold pcb enclosure & tray and humidty bottle.after edited its dimesions for them,i uploaded piezo element for humidifier above plastic bottle.t
After that,i searched for fridge box for watering water align witg tray.founding one on amazon.then i started extrude water box.and assemble it with below tray.
then,i cut slot in the middle for water level sensor.and added it.then adding soil moisture sensor in the tray as soil in.
<img width="1010" height="730" alt="Screenshot 2026-07-14 233705" src="https://github.com/user-attachments/assets/8f95ee19-829f-4488-b262-9a3cb23eb42c" />
thirdly,i make second block.and added it for greenhouse,then uploaded dc fan responsible for reduce humidty.then cut poloygn in block for fan.and added dht 22 & ldr sensors,and cut hole for it mounting holes so the sensor will be attached by srews.
After that,i made the left and right block,then extrude opening for 2 peltiers kit on each one.
<img width="839" height="688" alt="Screenshot 2026-07-14 233739" src="https://github.com/user-attachments/assets/a203238c-418e-4538-8ef8-40d60d6ceca7" />
Finally,i searched for greenhouse roof types.and fount A frame is suitable  egypt coditions and my challenge.then, four wood plate will hold polyethanael layer that cover greenhouse,and assemled them adjusting angles to fit on each other.
after that,i rendered greenhouse,tray & blocks.then i found way to add poly appearce by adding more lego blocks,then make them glass appeareance.
so i made roof on 2 blocks & left block,then making triangle to cover parts between roof and side blocks.
then,i renderd greenhouse assembly.
<img width="770" height="737" alt="Screenshot 2026-07-14 233828" src="https://github.com/user-attachments/assets/f318d3d9-9ca1-4d6e-8e0b-f51b7c0c117b" />

### Recording (2 h & 44 min) :
https://lapse.hackclub.com/timelapse/jrJTmdQnPTF2
