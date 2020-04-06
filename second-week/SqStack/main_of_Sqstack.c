#include "header/SqStack.h"
#include "Interface.c"
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
    int count = 9;
    
    while(1)
    {
        //ˢ�²˵�
        count++;
        while (count%10 == 0)
        {
            interface();break;
        }
        //ѡ��˵�
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
            if (s.bottom != NULL)
            {
                printf("the stack is exist! please destroy first!\n");
                break;
            }
            
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
            if (IsEmptyStack(s) == 1)
            printf("is empty\n");
            else if (IsEmptyStack(s) == 0)
            printf("is not empty\n");
            else
            printf("the stack is not exist\n");
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
            s = PushStack(s);
            printf("now the stack is ");
            Print(s);
            break;
        }
        //��ջ
        case 7:{
            s = PopStack(s);
            printf("now the stack is ");
            Print(s);
            break;
        }
      
        //����ջԪ��
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