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
//链栈
int main()
{
    LinkStack stack;
    stack.count = -1;
    int option;
    int input_times = 9;
    while(1)
    {
        //刷新菜单
        input_times++;
        while (input_times%10 == 0)
        {
            interface();break;
        }
        //选择菜单
        scanf("%d",&option);
        while(option < 1||option > 9)
        {
            fflush(stdin);
            printf("enter failed,check and try again\n");
            scanf("%d",&option);
        }
        switch (option)
        {
        //初始化栈
        case 1:{
            if(initLStack(&stack))
                printf("success!\n");
            else
                printf("the stack is exist, please destroy first\n");
            break;
        }
        //判断栈是否为空
        case 2:{
            if (isEmptyLStack(&stack) == 1)
            printf("is empty\n");
            else if (isEmptyLStack(&stack) == 0)
            printf("is not empty\n");
            else
            printf("the stack is not exist\n");
            break;   
        }
        //得到栈顶元素
        case 3:{
            ElemType e;
            if(getTopLStack(&stack, &e))
            printf("the top element is %d\n",e);
            else 
            printf("the stack is emtpy or not exist\n");
            break;
        }
        //清空栈
        case 4:{
            if (clearLStack(&stack))
            printf("the stack is clear now\n");
            else
            printf("the stack is empty or not exist\n");            
            break;
        }
        //销毁栈
        case 5:{
            if(destroyLStack(&stack))
            printf("the stack was destroied!\n");
            else
                printf("the stack was not exist\n");
            break;
        } 
        //入栈
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
        //出栈
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
      
        //遍历栈元素
        case 8:{
            if (stack.count <= 0)
            {
                printf("the stack is empty or not exist\n");
                break;
            }
            print(&stack);
            break;
        }
        //检测栈长度
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