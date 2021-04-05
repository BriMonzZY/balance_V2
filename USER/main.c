#include <sys.h>
#include <oled.h>
#include <delay.h>
#include <usart.h>


int main(void)	
{ 
	delay_init();	    	           //=====延时函数初始化	
	NVIC_Configuration();					 //=====中断优先级分组
	uart1_init(115200);	           //=====串口1初始化
	OLED_Init();                   //=====OLED初始化
	OLED_Clear();									 //=====OLED清屏
	
	
	
  while(1)	
	{
			delay_ms(50);				 			 					//=====50ms刷新一次屏幕即可,不需要一直刷新。
	}
}

