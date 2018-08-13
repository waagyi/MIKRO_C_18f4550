//Timer interrupt
//working interrupt



#define led1 PORTD.F1
#define ledint PORTD.F2


void interrupt()
{
  TMR0L = 193;    // Re-load TMR0
  INTCON = 0x20;  // Set T0IE and clear T0IF
  ledint=~ledint ;

  }


void main()
{
  TRISD=0;
  PORTD=0;
TRISB=0;
LATB=0;


INTCON=0xA0;         //bie=1 toi=1
T0CON=0b11000111;  //256ps in 8 bit mode
TMR0L=193;         //193 tmr0l for 500micro sec

 for(;;)
 
 {
 led1=~led1;
 delay_ms(1000);
  led1=~led1;
  delay_ms(1000);

  }

}

