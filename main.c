/*
 * File:   main.c
 * Author: root
 *
 * Created on 6 November, 2017, 3:28 PM
 */

#include <xc.h>

// PIC18F46K22 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1H
#pragma config FOSC = INTIO67   // Oscillator Selection bits (Internal oscillator block)
#pragma config PLLCFG = OFF     // 4X PLL Enable (Oscillator used directly)
#pragma config PRICLKEN = ON    // Primary clock enable bit (Primary clock is always enabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
#pragma config IESO = OFF       // Internal/External Oscillator Switchover bit (Oscillator Switchover mode disabled)

// CONFIG2L
#pragma config PWRTEN = OFF     // Power-up Timer Enable bit (Power up timer disabled)
#pragma config BOREN = SBORDIS  // Brown-out Reset Enable bits (Brown-out Reset enabled in hardware only (SBOREN is disabled))
#pragma config BORV = 190       // Brown Out Reset Voltage bits (VBOR set to 1.90 V nominal)

// CONFIG2H
#pragma config WDTPS = 32768    // Watchdog Timer Postscale Select bits (1:32768)

// CONFIG3H
#pragma config CCP2MX = PORTC1  // CCP2 MUX bit (CCP2 input/output is multiplexed with RC1)
#pragma config PBADEN = ON      // PORTB A/D Enable bit (PORTB<5:0> pins are configured as analog input channels on Reset)
#pragma config CCP3MX = PORTB5  // P3A/CCP3 Mux bit (P3A/CCP3 input/output is multiplexed with RB5)
#pragma config HFOFST = ON      // HFINTOSC Fast Start-up (HFINTOSC output and ready status are not delayed by the oscillator stable status)
#pragma config T3CMX = PORTC0   // Timer3 Clock input mux bit (T3CKI is on RC0)
#pragma config P2BMX = PORTD2   // ECCP2 B output mux bit (P2B is on RD2)
#pragma config MCLRE = EXTMCLR  // MCLR Pin Enable bit (MCLR pin enabled, RE3 input pin disabled)

// CONFIG4L
#pragma config STVREN = ON      // Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled (Legacy mode))

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection Block 0 (Block 0 (000800-003FFFh) not code-protected)
#pragma config CP1 = OFF        // Code Protection Block 1 (Block 1 (004000-007FFFh) not code-protected)
#pragma config CP2 = OFF        // Code Protection Block 2 (Block 2 (008000-00BFFFh) not code-protected)
#pragma config CP3 = OFF        // Code Protection Block 3 (Block 3 (00C000-00FFFFh) not code-protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot block (000000-0007FFh) not code-protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM not code-protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection Block 0 (Block 0 (000800-003FFFh) not write-protected)
#pragma config WRT1 = OFF       // Write Protection Block 1 (Block 1 (004000-007FFFh) not write-protected)
#pragma config WRT2 = OFF       // Write Protection Block 2 (Block 2 (008000-00BFFFh) not write-protected)
#pragma config WRT3 = OFF       // Write Protection Block 3 (Block 3 (00C000-00FFFFh) not write-protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) not write-protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0007FFh) not write-protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write-protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection Block 0 (Block 0 (000800-003FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection Block 1 (Block 1 (004000-007FFFh) not protected from table reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection Block 2 (Block 2 (008000-00BFFFh) not protected from table reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection Block 3 (Block 3 (00C000-00FFFFh) not protected from table reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot Block (000000-0007FFh) not protected from table reads executed in other blocks)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
//#include <stdio.h>
#define LEDTris TRISDbits.TRISD1 //Define LEDTris as TRISD Pin 1
#include <pic18lf46k22.h>
#include "mcc_generated_files/mcc.h"
#include <stdlib.h>
#include <math.h>									/* Include math header file */


long map(long x, long in_min, long in_max, long out_min, long out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
void main(void) {
SYSTEM_Initialize();
 int  a=0,b=0,c=0,a1=0,b1=0,c1=0,f=0;
 double theta,psy,phi,roll,pitch,yaw,Axout,Ayout,Azout;
 LEDTris = 0;//Set LED Pin data direction to OUTPUT
 do{
     
     
     f++;
  c= ADC_GetConversion(channel_AN24);
  //c1=map(c,0,700,0,1024);

 b= ADC_GetConversion(channel_AN25);
 //b1=map(b,0,700,0,1024);

 a= ADC_GetConversion(channel_AN26);
 //a1=map(a,0,700,0,1024);
 
 Axout = (((double)(a*5)/1.024)-1700.0)/330.0; 
		Ayout = (((double)(b*5)/1.024)-1700.0)/330.0;
		Azout = (((double)(c*5)/1.024)-1700.0)/330.0;
 
 theta = atan(Axout/(sqrt((pow (Ayout,2.0))+(pow (Azout,2.0)))))*57.29577951; 
		psy =  atan(Ayout/(sqrt((pow (Axout,2.0))+(pow (Azout,2.0)))))*57.29577951;
		phi =  atan((sqrt((pow (Ayout,2.0))+(pow (Axout,2.0))))/Azout)*57.29577951;

		roll = (atan2(Ayout,Azout))*57.29577951+180;
		pitch =  (atan2(Azout,Axout))*57.29577951+180;
		yaw =  (atan2(Axout,Ayout))*57.29577951+180;
		printf("\r\n\nStart-------%d",f);
        printf("\r\nX=%d",a);
        printf("\r\nY=%d",b);
        printf("\r\nZ=%d",c);
		printf("\r\nAxout = %fg",Axout);/* Send All value serially */
		printf("\r\nAyout =%fg",Ayout);
		printf("\r\nAzout =%fg",Azout);

		printf("\r\nTheta =%f",theta);
		printf("\r\nPsy = %f",psy);
		printf("\r\nPhi = %f",phi);

		printf("\r\nRoll = %f",roll);
		printf("\r\nPitch = %f",pitch);
		printf("\r\nYaw =%f",yaw);











PORTDbits.RD1=1;                    // set High
_delay(50000);                      // delay of 500ms
PORTDbits.RD1=0;
_delay(50000);
} while(1); 

    return;
}
