#include "header/SqStack.h"

Stack PushStack(Stack s, int data)
{
    if(s.top - s.bottom == s.size)
    {
        printf("the stack is full!");
        return s;
    }
    *s.top = data;
    s.top++;
    return s;
}