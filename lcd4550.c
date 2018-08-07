
//lcd test on 4550
//lcd on portb

char *text="HELLO WORLD";
void main()
{

TRISB=0;
for(;;)
{
//PORTB=0xff;
//delay_ms(1000);
//PORTB=0x00;
//delay_ms(1000);
//TRISB = 0;
PORTD=0;
ADCON1-0xff;
Lcd_Init(&PORTD);
Lcd_Cmd(LCD_CLEAR);
Lcd_Out(1, 4,text);
delay_ms(1000);
Lcd_Out(2,1,"I AM FINE");
delay_ms(1000);

}
}
