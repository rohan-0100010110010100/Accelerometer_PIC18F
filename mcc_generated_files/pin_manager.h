/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F46K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_RD1 aliases
#define IO_RD1_TRIS               TRISDbits.TRISD1
#define IO_RD1_LAT                LATDbits.LATD1
#define IO_RD1_PORT               PORTDbits.RD1
#define IO_RD1_ANS                ANSELDbits.ANSD1
#define IO_RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_RD1_GetValue()           PORTDbits.RD1
#define IO_RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_RD1_SetAnalogMode()  do { ANSELDbits.ANSD1 = 1; } while(0)
#define IO_RD1_SetDigitalMode() do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set channel_AN24 aliases
#define channel_AN24_TRIS               TRISDbits.TRISD4
#define channel_AN24_LAT                LATDbits.LATD4
#define channel_AN24_PORT               PORTDbits.RD4
#define channel_AN24_ANS                ANSELDbits.ANSD4
#define channel_AN24_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define channel_AN24_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define channel_AN24_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define channel_AN24_GetValue()           PORTDbits.RD4
#define channel_AN24_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define channel_AN24_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define channel_AN24_SetAnalogMode()  do { ANSELDbits.ANSD4 = 1; } while(0)
#define channel_AN24_SetDigitalMode() do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set channel_AN25 aliases
#define channel_AN25_TRIS               TRISDbits.TRISD5
#define channel_AN25_LAT                LATDbits.LATD5
#define channel_AN25_PORT               PORTDbits.RD5
#define channel_AN25_ANS                ANSELDbits.ANSD5
#define channel_AN25_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define channel_AN25_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define channel_AN25_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define channel_AN25_GetValue()           PORTDbits.RD5
#define channel_AN25_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define channel_AN25_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define channel_AN25_SetAnalogMode()  do { ANSELDbits.ANSD5 = 1; } while(0)
#define channel_AN25_SetDigitalMode() do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set channel_AN26 aliases
#define channel_AN26_TRIS               TRISDbits.TRISD6
#define channel_AN26_LAT                LATDbits.LATD6
#define channel_AN26_PORT               PORTDbits.RD6
#define channel_AN26_ANS                ANSELDbits.ANSD6
#define channel_AN26_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define channel_AN26_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define channel_AN26_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define channel_AN26_GetValue()           PORTDbits.RD6
#define channel_AN26_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define channel_AN26_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define channel_AN26_SetAnalogMode()  do { ANSELDbits.ANSD6 = 1; } while(0)
#define channel_AN26_SetDigitalMode() do { ANSELDbits.ANSD6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/