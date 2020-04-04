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


//基于数组的顺序栈
Status InitStack(SqStack **s,int size);//初始化栈
Status IsEmptyStack(SqStack *s);//判断栈是否为空
Status GetTopStack(SqStack *s,int *e); //得到栈顶元素
Status ClearStack(SqStack *s);//清空栈
Status DestroyStack(SqStack *s);//销毁栈
Status StackLength(SqStack *s,int *length);//检测栈长度
Status PushStack(SqStack *s,int data);//入栈
Status PopStack(SqStack *s,int *data);//出栈
void interface();

#endif 
