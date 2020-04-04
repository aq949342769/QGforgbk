#include "header/SqStack.h"

 Status InitStack(SqStack **s,int size)
 {
    *s->size = size;
    *s->bottom = (int *)malloc((*s->size) * sizeof (int));
    if (*s->bottom == NULL)
    {
        printf("初始化失败\n");
        return ERROR;      
    }
    else
    {
        *s->top = *s->bottom;
        *s->size = size; 
        return SUCCESS;
    }   
 }