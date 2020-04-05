#include "header/SqStack.h"
Status IsEmptyStack(SqStack s)
{
    if(s->top == -1)
    {
        return SUCCESS;
    }
    return ERROR;
}