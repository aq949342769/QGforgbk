#include "header/SqStack.h"
int IsEmptyStack(Stack s)
{
    if (s.bottom == NULL)
    {
        return 2;
    }
    if(s.top == s.bottom)
    return 1;
    else
    return 0;
}