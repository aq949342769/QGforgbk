#include "header/LinkStack.h"
Status clearLStack(LinkStack *s)
{
    if (s->count <= 0)
    {
        return ERROR;
    }
    
    LinkStackPtr temp = s->top;
    while (s->count != 0)
    {
        s->count--;
        s->top = s->top->next;
        free(temp);
        temp = s->top;
    }
    return SUCCESS;
    
    
}