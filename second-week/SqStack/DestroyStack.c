#include "header/SqStack.h"

Stack DestroyStack(Stack s)
{
    free(s.bottom);
    s.size = 0;
    s.top = NULL;
    s.bottom = NULL;
    printf("the stack was destroy!\n");
    return s;
}