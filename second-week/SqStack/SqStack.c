#include "header/SqStack.h"
#include "interface.c"
#include "InitStack.c"
#include "IsEmptyStack.c"
#include "PushStack.c"
#include "PopStack.c"
#include "GetTopStack.c"
#include "Print.c"
#include "StackLength.c"
#include "ClearStack.c"
#include "DestroyStack.c"
int main()
{
    int option;
    Stack s;
    s.bottom = NULL;
    s.top = NULL;
    s.size = 0;
    interface();
    while(1)
    {
        scanf("%d",&option);
        while(option < 1||option > 9)
        {
            fflush(stdin);
            printf("enter failed,check and try again\n");
            scanf("%d",&option);
        }
        switch (option)
        {
        //��ʼ��ջ
        case 1:{
            int size;
            printf("������ջ�Ĵ�С(������װ��������)��");
            while(scanf("%d",&size) != 1)
            {
                fflush(stdin);
                printf("enter failed,check and try again\n");
            }
            s = InitStack(s, size);
            printf("success!\n");
            break;
        }
        //�ж�ջ�Ƿ�Ϊ��
        case 2:{
            if(IsEmptyStack(s))
            printf("is empty\n");
            else
            printf("is not empty\n");
            break;   
        }
        //�õ�ջ��Ԫ��
        case 3:{
            GetTopStack(s);
            break;
        }
        //���ջ
        case 4:{
            s = ClearStack(s);
            break;
        }
        //����ջ
        case 5:{
            s = DestroyStack(s);
            break;
        } 
        //��ջ
        case 6:{
            int data;
            printf("data:");
            while(scanf("%d",&data) != 1)
            {
                fflush(stdin);
                printf("enter failed,check and try again\n");
            }
            s = PushStack(s,data);
            printf("success!\n");
            break;
        }
        //��ջ
        case 7:{
            PopStack(s);
            break;
        }
      

        case 8:{
            Print(s);
            break;
        }
        //���ջ����
        case 9:{
            StackLength(s);
            break;
        }
        default:
            {break;}
        }
        

    }
    return 0;
}