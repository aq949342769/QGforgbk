#include "header/SqStack.h"

 Status InitStack(SqStack *s,int size)
 {
    s->bottom = (int *)malloc((s->size) * sizeof (int));
    if (s->bottom == NULL)
    {
        return ERROR;
    }
    else
    {
        s->top = s->bottom;
        s->size = size; 
        return SUCCESS;
    }   
    

 }