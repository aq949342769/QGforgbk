#include "header/LinkStack.h"
Status pushLStack(LinkStack *s, ElemType data)
{
    LinkStackPtr _new = (LinkStackPtr)malloc(sizeof(StackNode));
    _new->data = data;
    _new->next = s->top;
    s->top = _new;
    s->count++;
    return SUCCESS;
    
}