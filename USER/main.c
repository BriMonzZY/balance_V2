#include <sys.h>
#include <oled.h>
#include <delay.h>
#include <usart.h>


int main(void)	
{ 
	delay_init();	    	           //=====��ʱ������ʼ��	
	NVIC_Configuration();					 //=====�ж����ȼ�����
	uart1_init(115200);	           //=====����1��ʼ��
	OLED_Init();                   //=====OLED��ʼ��
	OLED_Clear();									 //=====OLED����
	
	
	
  while(1)	
	{
			delay_ms(50);				 			 					//=====50msˢ��һ����Ļ����,����Ҫһֱˢ�¡�
	}
}

