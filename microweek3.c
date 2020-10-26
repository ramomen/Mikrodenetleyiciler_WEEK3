#include <microweek3.h>
/*
Ramazan Degirmenci 21856255
**/
#use fast_io(a)
#use fast_io(d)
#use fast_io(c)
int button=0;
void main()
{
setup_psp(PSP_DISABLED);
setup_spi(SPI_SS_DISABLED);
setup_timer_1(T1_DISABLED); 
setup_timer_2(T2_DISABLED,0,1);
setup_adc(ADC_OFF);
setup_ccp1(CCP_OFF); 
setup_ccp2(CCP_OFF);
set_tris_c(0x00);
set_tris_d(0x00);
set_tris_a(0x00000001);
output_c(0x00);
output_d(0x00);
   while(TRUE)
   {
      output_toggle(pin_d5);
      delay_ms(500);
      button=input(pin_a0);
      if(button==1)
      {
        output_high(pin_c3);
      }
      else
      {
      output_low(pin_c3);
      } 
   }

}
