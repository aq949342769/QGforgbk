#include "header/LinkStack.h"
Status initLStack(LinkStack *s)
{
    if(s->count >= 0)
    {
        return ERROR;
    }
    s->top = (StackNode*)malloc(sizeof(StackNode));
    s->top = NULL;
    //s->top->next = NULL;
    s->count = 0;
    return SUCCESS;
  
}