#include "header/LinkStack.h"
Status getTopLStack(LinkStack *s, ElemType *e)
{
    if (s->count <= 0)
        return ERROR;
    *e = s->top->data;
    return SUCCESS;
}
