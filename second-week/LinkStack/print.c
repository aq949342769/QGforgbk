#include "header/LinkStack.h"
void print(LinkStack *s)
{
    LinkStackPtr temp = s->top;
    printf("top [");
    while (temp->next != NULL)
    {
        
        printf("%d-",temp->data);
        temp = temp->next;
    }
    printf("] bottom");
    
}