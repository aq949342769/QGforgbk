#include "header/LinkStack.h"
Status isEmptyLStack(LinkStack *s)
{

    if (s->count > 0)
    return ERROR;
    if (s->count == 0)
    return SUCCESS;
}