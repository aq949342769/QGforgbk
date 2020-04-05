#include "header/LinkStack.h"
Status initLStack(LinkStack *s)
{
    if(s->top != NULL)
    {
        return ERROR;
    }
    s->top = (StackNode*)malloc(sizeof(StackNode));
    s->top = NULL;
    s->top->next = NULL;
    s->count = 0;
    return SUCCESS;
  
}