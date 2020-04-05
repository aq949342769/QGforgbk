#include "header/SqStack.h"
Stack PopStack(Stack s)
{
    if (s.bottom == NULL)
    {
        printf("the stack is not exist\n");
        return s;
    }
    if (s.bottom == s.top)
    {
        printf("the stack is empty, please check\n");
        return s;
    }
    s.top--;
    printf("data:%d is poped\n",*s.top);

    return s;
}