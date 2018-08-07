
 unsigned int i,j;
void main()
{

TRISB=0;
LATB=0;
TRISA=0;
LATA=0;
TRISC=0;
LATC=0;
TRISD=0;
LATD=0;
INTCON2=0;
ADCON1=0x0f;// make ad pin to digital op
for(;;)
       {
       //LATD=0;
//       PORTB=~PORTB;
//       PORTA=~PORTA;
//       PORTC=~PORTc;
//       PORTD=~PORTD;
//       delay_ms(100);
//        PORTB=~PORTB;
//       PORTA=~PORTA;
//       PORTC=~PORTc;
//       PORTD=~PORTD;
//       delay_ms(100);
       j=1;
       for(i=0;i<=8;i++)
       {
       PORTD=j;
       delay_ms(100);
       j=j<<1;
       }

        for(i=0;i<=8;i++)
        {
        PORTD=j;
       delay_ms(100);
       j=j>>1;
       }
       }

       }
