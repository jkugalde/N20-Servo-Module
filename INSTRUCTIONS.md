# Hardware

The parts are stored [HERE](https://grabcad.com/library/jumping-robot-leg-1).

A 2x3 pin header male connector is located on top of the module, connected to the motor and sensor pins. There is also an adapter piece between the motor shaft and the angle sensor, as the shaft is 3 mm and the angle sensor is for 4 mm shafts.

<img src="/imgs/module.png" width="350">

## Commercial parts

This is the commercial parts list to make a working leg (2 modules), the rest is 3d printing. 

 ITEM              | QTY
 ---------------------------   | ------------
 Pololu N20 Brushed DC Motor| 1
 Angle sensor CJMCU-103 | 2
 2x3 male pin headers (2.54mm) | 1
 Arduino (any Arduino) | 1 
 DRV8801 motor driver | 2

 You also need a power source capable of providing at least 9V 1A.

 ## 3D printed parts

 This is the printed parts list:

  ITEM              | QTY
 ---------------------------   | ------------
 Motor case | 1
 Adapter   | 1

 The parts are printed using a FDM printer. I used PETG as the motor can get hot and weaken the press fit between the motor and the parts. The adapter was printed using a 0.3 mm nozzle, as is a very small piece.

 ## Assembly

### Module

First, a 2x3 pin header must be soldered in the angle sensor. Then:

- Insert the angle sensor in the motor case.
- Insert the motor in the case, and the shaft through the angle sensor. You may need to rotate the shaft to match with the angle sensor.
- Insert the adapter.
- Solder two wires in the motor terminals and in the male pins as the Figure indicates.

<img src="/imgs/solder.png" width="350">

