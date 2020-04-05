#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/*typedef enum Stack 
{
	ERROR = 0, 
	SUCCESS = 1
} Stack;*/


typedef struct SqStack 
{
	int  *bottom;
	int  *top;
	int   size;
} Stack;


//���������˳��ջ
Stack InitStack(Stack s,int size);//��ʼ��ջ
int IsEmptyStack(Stack s);//�ж�ջ�Ƿ�Ϊ��
void GetTopStack(Stack s); //�õ�ջ��Ԫ��
Stack ClearStack(Stack s);//���ջ
Stack DestroyStack(Stack s);//����ջ
void StackLength(Stack s);//���ջ����
Stack PushStack(Stack s);//��ջ
Stack PopStack(Stack s);//��ջ
void Print(Stack s);//����Ԫ��
void interface();

#endif 
