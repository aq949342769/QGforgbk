#include "header/SqStack.h"
void GetTopStack(Stack s)
{
    if (s.bottom == NULL)
    {
        printf("the stack is not exist\n");
        return;
    }
    if (s.top == s.bottom)
    {
        printf("the stack is empty, please check\n");
        return;
    }
    s.top--;
    printf("the top elem is %d\n",*s.top);
}