/*************************************************
Copyright (2016~2017),TopBand CO.,LTD 
FileName: PID.h
Author: Hunter Zhu
Date:   2017.08.15
Description: PID�������궨���

History: 2017/8/15 v0.0  edit this moudle
*************************************************/

#ifndef _pid_h
#define _pid_h

#include "common.h"


typedef struct 
{
    float kp;           //PI�ջ��ı�������
    float ki;           //PI�ջ��Ļ��ֲ���
    int32 target_speed; //�ջ���Ŀ���ٶ� ��Ҫֱ���޸��������
    int32 real_speed;   //��ǰ���ת��
    int32 error;        //Ŀ���ٶ���ʵ���ٶ����
    int32 out_max;      //�ջ�������
    int32 pout;         //�ջ����ֵ
    float iout;         //�ջ����ֵ
    int32 out;          //�ջ����ֵ
}closed_loop_struct;



extern closed_loop_struct closed_loop;

extern void closed_loop_pi_init(void); //PI��ʼ������
extern void closed_loop_pi_calc(int32 read_speed); //PI�������

#endif