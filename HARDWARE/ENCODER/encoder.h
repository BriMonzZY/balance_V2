#ifndef __ENCODER_H
#define __ENCODER_H


void Encoder_Init_TIM2(void);
void Encoder_Init_TIM4(void);
int Read_Encoder(u8 TIMX);			//Ŀǰ��Ϊ100Hz�����ʿ�������ʹ������

#endif /* __ENCODER_H */
