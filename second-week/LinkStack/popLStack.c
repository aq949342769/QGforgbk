#include "header/LinkStack.h"
Status popLStack(LinkStack *s, ElemType *data)
{   LinkStackPtr temp;
    LinkStackPtr temp_check = s->top;
    int check = s->count;
    while (temp_check->data != *data)
    {
        if (check <= 0)
        {
            return ERROR;
        }
        else if(temp_check->data == *data)
        {
            while (s->top->data != *data)
            {
                temp = s->top->next;
                free(s->top);
                s->count--;
                s->top = temp;
            }
            return SUCCESS;
        }
        check--;
        temp_check = temp_check->next;
    }   
}