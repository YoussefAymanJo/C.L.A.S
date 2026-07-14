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

## Entry 6
created at:2026-7-12
### Content 
Firstly,grow light power control mosfer was missiing,so i added it to schematic and connect it to 5v,then i uploaded pcb and rerouted new mosfet.then export new 3d model and also export gerbers folder.
<img width="1062" height="499" alt="Screenshot 2026-07-15 000205" src="https://github.com/user-attachments/assets/0062eb11-a32f-4649-a084-c09c64a367a6" />
<img width="1156" height="829" alt="Screenshot 2026-07-15 000242" src="https://github.com/user-attachments/assets/cb804ea6-a55d-468e-b2a7-cbf83717567b" />
After that,i added mosfets 3d model to pcb, then upated pcb in it enclosure,and realign it with screws using surface analysis.then update greenhouse assembly.
then,i seacrhed for grow light strip 3d model,and trying to add it on sides cover,but i will not cover all crops.so i put them on top wood A roof.adjusting them to be connected.then i rendered the layers of polyehtanel to make it more clear by glass appeareacne.
<img width="1265" height="746" alt="Screenshot 2026-07-15 000154" src="https://github.com/user-attachments/assets/9aa68a06-e537-4de5-b352-21f223aade11" />
Secondly,i worked on BOM file,adding item name and link in shop and their price in usd.
<img width="874" height="743" alt="Screenshot 2026-07-15 000110" src="https://github.com/user-attachments/assets/63ad1ac2-4fc0-4b41-ad17-3a9c246a206b" />
Finally,i searched for dashboard UI and found some cool UI ,gaining ideas for my dashboard.
<img width="1062" height="499" alt="Screenshot 2026-07-15 000205" src="https://github.com/user-attachments/assets/311a7e0a-e150-4541-9f95-58519c74f308" />

### Recording (1 h & 47 min) :
https://lapse.hackclub.com/timelapse/XfLlIYKGBLIV

https://lapse.hackclub.com/timelapse/Oo2w71q-Nlll
## Entry 7
created at:2026-7-12
### Content 
During this session I worked mainly on Esp code.
firstly,i imported dht22 sensor library.then defined pin for sensors dht22 & ldr & soil moiture and water level.after that i defined pins for actucators power controllers.
then,i create struct for lettuce and pepper conditions ranges based on my 4 paramters.then,define pins as input and read sensors readings,convert water level readings to usable value by equation.
<img width="1002" height="590" alt="Screenshot 2026-07-15 005658" src="https://github.com/user-attachments/assets/c24276fe-b4ce-40b8-b1a3-7a2f9186f929" />
after that,i created 3 if cases ,first one for lettuce coditions ,2 for pepper and last one for manual operating by user for testing or overide.i sperated cases for each parameter into 3 ,first on ,if it below the range , above range and between range.for instance,if temp below range heat lamp on and otherwise peltier on ,if on range all off.
Then,i imported firebase client libray and wifi library for esp,then define wifi & password and firebase url and sercet code.
then,added wifi connection server in setup function,and loop until it connected in while loop.
then,i call planttype from firebase and store it,then it will determine case 0 for lettuce,1 pepper and left for manual.in each case,i define bool variable 0 for  on and 1 for off and change them  based on case.
<img width="1190" height="845" alt="Screenshot 2026-07-15 005654" src="https://github.com/user-attachments/assets/428607bc-1f7e-4c56-a474-2fbbf8044c47" />
<img width="989" height="733" alt="Screenshot 2026-07-15 005635" src="https://github.com/user-attachments/assets/02821a35-351e-4f7b-8d5e-6a0917ff506a" />
<img width="1043" height="794" alt="Screenshot 2026-07-15 005627" src="https://github.com/user-attachments/assets/7ffe3393-6491-4382-bae7-514c5652a16b" />

finally,in third case ,i get actuctors status from firebase ,then print it in serial monitor.then upated firebase with sensor readings every 30sec and actuctors status.
<img width="837" height="510" alt="Screenshot 2026-07-15 005548" src="https://github.com/user-attachments/assets/e1dd76c9-edaf-4efb-bc6e-a5078d1dcc4d" />
<img width="963" height="648" alt="Screenshot 2026-07-15 005541" src="https://github.com/user-attachments/assets/02db21f5-51e7-4a00-ace4-75c37dd5e154" />

### time (2 h & 5 min) :

## Entry 8
created at:2026-7-14
### Content 
During this session,i worked on dashboard.firstly,i want to make sidebar for navigation,so i watched tutorial how to make one,then i made it ,it consist of Home,about us and logout.i made main nav contianer then first div for projec name and logo on top  and icon form google icons,then unodered list for navigation elements,each one consist of link for another page and icon and span for title and reconized active page with active name class.and at end div for logout.
<img width="1900" height="840" alt="Screenshot 2026-07-15 015729" src="https://github.com/user-attachments/assets/72af6f98-04fd-4020-8e34-090e1f3ff5c5" />

about css for nav bar,sidebar box properties from size ,height ,bg colour and align ,then active highlight ,then logos and text css and hover animation bg colour.then title css from font family & size & colour and disply,finally,logout css.
<img width="1498" height="575" alt="Screenshot 2026-07-15 015531" src="https://github.com/user-attachments/assets/b4edf72c-d3de-4b21-8069-42fcc59637ff" />
<img width="1525" height="364" alt="Screenshot 2026-07-15 015535" src="https://github.com/user-attachments/assets/0200e501-3aa0-4aab-9d54-2c847e0787e9" />
<img width="1565" height="666" alt="Screenshot 2026-07-15 015543" src="https://github.com/user-attachments/assets/2c934485-cfe3-46e5-9494-f023ce837d07" />

After that,i made simple dasboard ui without js,i will add it when buidlnig and testing clas.firstly,i make grid of boxes show guage contianer of sensors readings and same grid of boxes for actuactors on/off.then css for dashboard,firstly i made css for boxes form size and colours and align items.after that,i make guage css,then css for button in actuactors boxes,later i will add js with firebase for them but i need prototype and recieve real readings from sesnors.
<img width="938" height="599" alt="Screenshot 2026-07-15 015511" src="https://github.com/user-attachments/assets/c5ce2d46-1f62-4d76-99ab-b20e234e5b31" />
<img width="1443" height="643" alt="Screenshot 2026-07-15 015603" src="https://github.com/user-attachments/assets/815b91ec-8dc6-416f-957b-bd7124f57a6f" />
<img width="1438" height="564" alt="Screenshot 2026-07-15 015619" src="https://github.com/user-attachments/assets/e2f8cafd-b186-4ddc-9439-71473e8e403c" />

<img width="1904" height="906" alt="Screenshot 2026-07-15 015453" src="https://github.com/user-attachments/assets/71bedf82-8cfb-4943-a72c-745598f529d6" />
<img width="1904" height="588" alt="Screenshot 2026-07-15 015502" src="https://github.com/user-attachments/assets/b1192a3e-a43f-4026-b21e-9c7ac3795351" />

### time (3 h & 2 min) :

## Entry 9
created at:2026-7-14
### Content 
During this session, I worked on the login and about pages.
firstly,in about us page,i coped navbar code form home page and edited it to be active on about us.i want to show my project scientific poster in this page for school evaulators,so i used iframe element in html and uploaded pdf.first,edit on main contianer properties ,alig element at center,adding padding from top and bottom ,
then i added css for h1 element to be in center with specific colour from my plattet,with weight 700 and size 2 rem.then align ifram in center with 100 width and height and border raduis 0.75em.
<img width="648" height="641" alt="Screenshot 2026-07-15 011038" src="https://github.com/user-attachments/assets/86702d55-c066-48f4-9d02-55a8496bd1d3" />
<img width="648" height="641" alt="Screenshot 2026-07-15 011038" src="https://github.com/user-attachments/assets/267c7b91-49d6-4b61-bab0-577e0f25ea85" />
<img width="648" height="641" alt="Screenshot 2026-07-15 011038" src="https://github.com/user-attachments/assets/7077ec1a-2be9-4f67-babc-28428e33301e" />

Secondly,login Page:i watched some tutorial to make simple login page,i will add later js in testing prototoype,but now just ui.
i made first main div for lonig box and added div for title and 2 field divs for username and password.then a href link for index page.
then i started css in html , i use same colour variable form index.then  first make body properites,bg colour and elements aligment in center.then i made login box,with 300px width and border 2px ,bg colour.after that, align h1 name in center , then  divs fields for username and password  css.finaly,i tried to make a href look like button.
<img width="1896" height="987" alt="Screenshot 2026-07-15 012334" src="https://github.com/user-attachments/assets/0f34e773-4fb4-4f79-b777-95e217f522ef" />
<img width="860" height="624" alt="Screenshot 2026-07-15 012304" src="https://github.com/user-attachments/assets/90b66a32-8d8c-4668-b306-b70026b3df36" />
<img width="706" height="463" alt="Screenshot 2026-07-15 012245" src="https://github.com/user-attachments/assets/6bf952cd-337c-4b3c-8908-7ac91a9e448f" />
### time (53 min) :
