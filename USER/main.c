#include <sys.h>
#include <oled.h>
#include <delay.h>
#include <usart.h>
#include "encoder.h"


int main(void)	
{ 
	int encoder1 = 0;
	int encoder2 = 0;
	delay_init();	    	           //=====��ʱ������ʼ��	
	NVIC_Configuration();					 //=====�ж����ȼ�����
	uart1_init(115200);	           //=====����1��ʼ��
	OLED_Init();                   //=====OLED��ʼ��
	OLED_Clear();									 //=====OLED����
	
	Encoder_Init_TIM2();
	Encoder_Init_TIM4();
	
	
  while(1)	
	{
		encoder1 = Read_Encoder(2);
		encoder2 = -Read_Encoder(4);
			OLED_Num2(1, 50, encoder1);
		OLED_Num2(14, 20, encoder2);
		delay_ms(10);
		//printf("%d   \n", encoder);
	}
}

