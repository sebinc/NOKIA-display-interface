// #include<pic.h>
 #include "includes.h"
 
 // #define _XTAL_FREQ 16000000
 
 __CONFIG(HS & WDTDIS & LVPDIS & BORDIS );
 
 
 void main()
 {
	 TRISB=0x00;
	 TRISC=0x00;
	 TRISD=0x00;
	 lcd_init();
	 delay(250);
	 
	 
     lcd_gotoxy(0,0);
     lcd_str("Hello GitHub");
     
     lcd_gotoxy(3,0);
     lcd_str("Created By");
     
     lcd_gotoxy(5,0);
     lcd_str("*SEBIN C JOSEPH*");
	 while(1);
 } 