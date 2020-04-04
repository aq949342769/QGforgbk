#include "header/SqStack.h"
#include "interface.c"
#include "InitStack.c"

Status InitStack(SqStack *s ,int size);
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
            printf("请输入栈的大小(即可以装几个数据)：");
            while(scanf("%d",&size) != 1)
            {
                fflush(stdin);
                printf("输入错误，请重新输入\n");
            }
            SqStack *s;
            printf("%d",InitStack(s, size));
            break;
        }
        default:
            {break;}
        }
        

    }
    return 0;
}