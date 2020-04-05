#include "header/LinkStack.h"
void print(LinkStack *s)
{
    LinkStackPtr temp = s->top;
    printf("top [");
    while (temp!= NULL)
    {
        
        printf("-%d",temp->data);
        temp = temp->next;
    }
    printf("] bottom\n");
    
}