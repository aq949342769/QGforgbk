#include "header/SqStack.h"
Stack ClearStack(Stack s)
{
    if(s.top == s.bottom)
    {
        printf("the stack is empty!\n");
        return s;
    }
    free(s.bottom);
    int size = s.size;
    s = InitStack(s,size);
    printf("the stack is empty now\n");
    return s;
}