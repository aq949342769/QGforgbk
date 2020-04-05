#include "header/SqStack.h"
void StackLength(Stack s)
{
    if (s.top == s.bottom)
    {
        printf("the stack is empty!\n");
        return;
    }
    int i=0;
    for(i=0;s.top!=s.bottom;i++)
    {
        s.top--;
    }
    printf("the stack length is %d\n",i);
}