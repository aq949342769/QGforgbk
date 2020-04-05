#include "header/SqStack.h"

Stack DestroyStack(Stack s)
{
    if (s.bottom == NULL)
    {
        printf("the stack is not exist\n");
        return s;
    }
    free(s.bottom);
    s.size = 0;
    s.top = NULL;
    s.bottom = NULL;
    printf("the stack was destroy!\n");
    return s;
}