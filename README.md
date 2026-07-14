# C.L.A.S

## Description
Is an abbreviation for a closed-loop feedback system.A system that monitors and acts based on lettuce & pepper plant conditions in 6th October city,Egypt.
In  monitors temperature & Humidty & soil moiture & light intensity.then,it responds in case in change in plants optimal range conditonns.As,it used actuctors,peltiers ,humidifier,heating lamp ,grow light , water pump and fan to out excessive humidty.It powered by esp s3.and cloud base storage of firebase,show data at moment on web app.
## Why it was built
This is grade 11 Capstone Project in my school,so i must make it.It is about the challenge Egypt faces in integrating IoT closed systems with farming.My project solve this by providing high nutrition needed crops in my area all the year,lettuce&pepper controlled  by closed feedback system.that control temperature & humidty & soil moisture & light parameters.
## How to use it / Build it
 First of all,prepare materials ,then buy wood and start cut into blocks,after that open parts in wood using cnc for actuactors and other in pcb enclosure.After that assemble all together using nails and wood glue.then adding electronic compontes sesnor & actucators.and connect them first to power supply to test it.then connect each one alone first to esp ,then test them all.after that,check wire isolation and system working and real data from sesnors.test system manul for 2 h. Finally, add plants and soil.
## Schematic
I made symbols & footprints for missing parts in kicad,then wires them ,and add pin headers instead of wire sensor direct to pcb,finally,organize schematic and adding flow diagram of system feedback.
<img width="1156" height="829" alt="Screenshot 2026-07-15 000242" src="https://github.com/user-attachments/assets/ccdca0a8-433c-47cc-8aa4-8aae32b5c529" />

## PCB
pcb consist of pinheaders and will connect to sensors using isolated wires & jumpers,and actuctors will connect to mosfets.I made pcb on kicad,body outline first,the routed componets together.
<img width="1038" height="576" alt="Screenshot 2026-07-15 000231" src="https://github.com/user-attachments/assets/f4810c1a-c37d-4638-8697-b31ef4544152" />

## CAD
i assembled greenhouse on fusion and make enclosure for pcb ,power supply & buck.
<img width="770" height="737" alt="Screenshot 2026-07-14 233828" src="https://github.com/user-attachments/assets/1386518d-3e1e-4234-9d69-1dbcb07837e2" />
<img width="1206" height="695" alt="Screenshot 2026-07-14 225231" src="https://github.com/user-attachments/assets/7d66edc6-9e52-4cc2-8949-a5a7a49e0cb7" />

## Firmware
I made esp code and web to monitor data form firebase,but i will add js part later during building
### ESp code 
<img width="1190" height="845" alt="Screenshot 2026-07-15 005654" src="https://github.com/user-attachments/assets/27ee4338-fc99-441c-ac20-ad12c17a1554" />
### website 
https://youssefaymanjo.github.io/WEb-clas/
## BOM 
I made the BOM  and needed materials ,in egypt then convert its price to USD dollar.
<img width="874" height="743" alt="Screenshot 2026-07-15 000110" src="https://github.com/user-attachments/assets/6c861a34-8caf-4f5d-96a0-b37290babc13" />

