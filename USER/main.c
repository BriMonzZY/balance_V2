/**
 * @project	balance_evo
 * @author	
 * @brief		
 * @version 0.1
 * @date 		2021-04-6
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/* 包含头文件 */
#include "sys.h"

/* 全局变量定义 */


/**
 * @brief		主函数
 * 
 * @param		无
 * @return	无
 */
int main(void)	
{ 
	int encoder1 = 0;
	int encoder2 = 0;
	
	/* 初始化部分 */
	NVIC_Configuration();		//中断优先级分组
	delay_init();						//延时函数初始化	
	uart1_init(115200);			//串口1初始化(115200)
	OLED_Init();						//OLED初始化
	OLED_Clear();						//OLED清屏
	Encoder_Init_TIM2();		//TIM2编码器模式初始化
	Encoder_Init_TIM4();		//TIM4编码器模式初始化
	
	
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

