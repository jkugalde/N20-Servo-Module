# N20 Servo Module

I made a custom servo motor using a cheap N20 DC motor and an angle sensor.

## Summary

<img src="/imgs/module.png" width="350">

The N20 is a DC brushed motor format. It comes in different gears ratio and power outputs, but at the same size, so the idea is that you can use the same module for different projects, depending on the torque or rpm desired.

This module converts the N20 into a servo, to control the shaft angular position, using a small, lightweight and with very low friction angle sensor (CJMCU-103). [HERE](INSTRUCTIONS.md) are the assembly instructions.

## First experiments

- Implemented a PID for shaft angle control. 

## Further Work

- Characterize the DC motor to generate a dynamic control using torque and current.