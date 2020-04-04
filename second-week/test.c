#include "SqStack/header/SqStack.h"
#include <stdio.h>
#include <stdlib.h>
int InitStack(SqStack *s,int size)
 {
    s->bottom = (int *)malloc((s->size) * sizeof (int));
    if (s==NULL)
    {
        exit(0);
    }
    else
    {
        s->top = s->bottom;
        s->size = size; 
        return 1;
    }   
    

 }
int main()
{
    int option;
    interface();
    while(1)
    {
        while(scanf("%d",&option) != 1)
        {
            fflush(stdin);
            printf("输入错误，请重新输入\n");
        }
        switch (option)
        {
        case 1:{
            int size;
            printf("请输入栈的大小(字节)：");
            while(scanf("%d",&size) != 1)
            {
                fflush(stdin);
                printf("输入错误，请重新输入\n");
            }
            SqStack *s;
            //InitStack(s, size);
            break;
        }
        default:
            {break;}
        }
        

    }
    return 0;
}