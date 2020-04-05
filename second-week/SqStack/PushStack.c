#include "header/SqStack.h"

Stack PushStack(Stack s)
{
    if (s.bottom == NULL)
    {
        printf("the stack is not exist\n");
        return s;
    }
    else if(s.top - s.bottom == s.size)
    {
        printf("the stack is full!\n");
        return s;
    }
    int data;
    printf("data:");
    while(scanf("%d",&data) != 1)
    {
        fflush(stdin);
        printf("enter failed,check and try again\n");
    }
    *s.top = data;
    s.top++;
    return s;
}