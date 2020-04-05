#include "header/LinkStack.h"
#include "interface.c"
#include "initLStack.c"
#include "isEmptyStack.c"
#include "pushLStack.c"
#include "popLStack.c"
#include "getTopLStack.c"
#include "print.c"
#include "LStackLength.c"
#include "clearLStack.c"
#include "destroyLStack.c"
//��ջ
int main()
{
    LinkStack stack;
    stack.count = -1;
    int option;
    int input_times = 9;
    while(1)
    {
        //ˢ�²˵�
        input_times++;
        while (input_times%10 == 0)
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
            if(initLStack(&stack))
                printf("success!\n");
            else
                printf("the stack is exist, please destroy first\n");
            break;
        }
        //�ж�ջ�Ƿ�Ϊ��
        case 2:{
            if (isEmptyLStack(&stack) == 1)
            printf("is empty\n");
            else if (isEmptyLStack(&stack) == 0)
            printf("is not empty\n");
            else
            printf("the stack is not exist\n");
            break;   
        }
        //�õ�ջ��Ԫ��
        case 3:{
            ElemType e;
            if(getTopLStack(&stack, &e))
            printf("the top element is %d\n",e);
            else 
            printf("the stack is emtpy or not exist\n");
            break;
        }
        //���ջ
        case 4:{
            if (clearLStack(&stack))
            printf("the stack is clear now\n");
            else
            printf("the stack is empty or not exist\n");            
            break;
        }
        //����ջ
        case 5:{
            if(destroyLStack(&stack))
            printf("the stack was destroied!\n");
            else
                printf("the stack was not exist\n");
            break;
        } 
        //��ջ
        case 6:{
            ElemType data;
            printf("data:");
            while (scanf("%d",&data) != 1)
            {
                fflush(stdin);
                printf("enter failed, check your data and try again\n");
            }
            if(pushLStack(&stack, data))
            printf("push success!\n");
            else
            printf("the stack is not exist\n");
            break;
        }
        //��ջ
        case 7:{
            if (stack.count <= 0)
            {
                printf("the stack is empty or not exist\n");
                break;
            }
            ElemType data;
            printf("enter the data that ready to pop:");
            while (scanf("%d",&data) != 1)
            {
                fflush(stdin);
                printf("enter fail, please check and try again\n");
            }
            if (popLStack(&stack, &data))
            {
                printf("the data you enter has poped\n");
            }
            printf("the data is not exist!\n");
            break;
        }
      
        //����ջԪ��
        case 8:{
            if (stack.count <= 0)
            {
                printf("the stack is empty or not exist\n");
                break;
            }
            print(&stack);
            break;
        }
        //���ջ����
        case 9:{
            ElemType length;
            if(LStackLength(&stack, &length))
            printf("the length of the stack is %d\n", length);
            else
            printf("the stack is empty or not exist\n");
            break;
        }
        default:
            {break;}
        }
        

    }
    return 0;
}