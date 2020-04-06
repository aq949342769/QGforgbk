#include "header/LinkStack.h"
Status isEmptyLStack(LinkStack *s)
{

    if (s->count > 0)
    return ERROR;
    else
    return SUCCESS;

}