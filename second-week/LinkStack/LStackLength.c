#include "header/LinkStack.h"
Status LStackLength(LinkStack *s, int *length)
{
    if (s->count <= 0)
    {
        return ERROR;
    }
    *length = s->count;
    return SUCCESS;
}