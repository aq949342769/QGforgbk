#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
typedef enum Status 
{
	ERROR = 0, 
	SUCCESS = 1
} Status;


typedef struct SqStack 
{
	int  *bottom;
	int  *top;
	int   size;
} SqStack;


//���������˳��ջ
Status InitStack(SqStack **s,int size);//��ʼ��ջ
Status IsEmptyStack(SqStack *s);//�ж�ջ�Ƿ�Ϊ��
Status GetTopStack(SqStack *s,int *e); //�õ�ջ��Ԫ��
Status ClearStack(SqStack *s);//���ջ
Status DestroyStack(SqStack *s);//����ջ
Status StackLength(SqStack *s,int *length);//���ջ����
Status PushStack(SqStack *s,int data);//��ջ
Status PopStack(SqStack *s,int *data);//��ջ
void interface();

#endif 
