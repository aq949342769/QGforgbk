#include "header/SqStack.h"
#include "interface.c"
#include "InitStack.c"

int main()
{
    int option;
    SqStack *s;
    interface();
    while(1)
    {
        while(scanf("%d",&option) != 1)
        {
            fflush(stdin);
            printf("�����������������\n");
        }
        switch (option)
        {
        case 1:{
            int size;
            printf("������ջ�Ĵ�С(������װ��������)��");
            while(scanf("%d",&size) != 1)
            {
                fflush(stdin);
                printf("�����������������\n");
            }
            InitStack(&s, size);
            break;
        }
        default:
            {break;}
        }
        

    }
    return 0;
}