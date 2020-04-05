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


//基于数组的顺序栈
Stack InitStack(Stack s,int size);//初始化栈
int IsEmptyStack(Stack s);//判断栈是否为空
void GetTopStack(Stack s); //得到栈顶元素
Stack ClearStack(Stack s);//清空栈
Stack DestroyStack(Stack s);//销毁栈
void StackLength(Stack s);//检测栈长度
Stack PushStack(Stack s);//入栈
Stack PopStack(Stack s);//出栈
void Print(Stack s);//遍历元素
void interface();

#endif 
