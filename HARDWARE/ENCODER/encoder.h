#ifndef __ENCODER_H
#define __ENCODER_H


void Encoder_Init_TIM2(void);
void Encoder_Init_TIM4(void);
int Read_Encoder(u8 TIMX);			//目前认为100Hz采样率可以满足使用需求

#endif /* __ENCODER_H */
