#include "header/SqStack.h"
void Print(Stack s)
{
    if (s.bottom == s.top)
    {
        printf("the stack is empty\n");
        return;
    }
    printf("the stack is:");
    printf("top [");
    while (s.top != s.bottom)
    {
        s.top--;
        printf("-");
        printf("%d", *s.top);
    }
    printf("] bottom\n");
}