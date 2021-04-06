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

/* ����ͷ�ļ� */
#include "sys.h"

/* ȫ�ֱ������� */


/**
 * @brief		������
 * 
 * @param		��
 * @return	��
 */
int main(void)	
{ 
	int encoder1 = 0;
	int encoder2 = 0;
	
	/* ��ʼ������ */
	NVIC_Configuration();		//�ж����ȼ�����
	delay_init();						//��ʱ������ʼ��	
	uart1_init(115200);			//����1��ʼ��(115200)
	OLED_Init();						//OLED��ʼ��
	OLED_Clear();						//OLED����
	Encoder_Init_TIM2();		//TIM2������ģʽ��ʼ��
	Encoder_Init_TIM4();		//TIM4������ģʽ��ʼ��
	
	
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

