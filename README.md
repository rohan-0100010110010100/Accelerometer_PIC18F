# Accelerometer_PIC18F
Complete implementation of Accelerometer driver for ADLX335 on PICK18F46k22 

ADLX335 is 3-axis accelerometer , it can measure the acceleration in x , y and z direction. The demonstration is based on accelerometer and UART inteface of PIC18F46K22 PDIP package microcontroller. The arranement also requires a bi-directional level shifter to feth the accelerometer reading.

## Requirement 

* MPLABX IDE, free IDE from Microchip, Inc.
* ADLX335 Accelerometer( incase if you are prototyping on Breadboard)
* PIC18F46K22 PDIP microcontroller chip.
* Crystal Oscillator 16 Mhz. ( in this case we are using microcontroller internal 1Mhz Oscilattor)

## Describtion of the System

The System is arranged such that the accelerometer reading is nomalized between 0 to 300. 
 

