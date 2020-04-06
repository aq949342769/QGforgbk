#include "header/LinkStack.h"
Status popLStack(LinkStack *s)
{   
    LinkStackPtr p = s->top;
    s->top = s->top->next;
    free(p);
    s->count--;
    return SUCCESS;
    
}