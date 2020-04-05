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
        //初始化栈
        case 1:{
            int size;
            printf("请输入栈的大小(即可以装几个数据)：");
            while(scanf("%d",&size) != 1)
            {
                fflush(stdin);
                printf("enter failed,check and try again\n");
            }
            s = InitStack(s, size);
            printf("success!\n");
            break;
        }
        //判断栈是否为空
        case 2:{
            if(IsEmptyStack(s))
            printf("is empty\n");
            else
            printf("is not empty\n");
            break;   
        }
        //得到栈顶元素
        case 3:{
            GetTopStack(s);
            break;
        }
        //清空栈
        case 4:{
            s = ClearStack(s);
            break;
        }
        //销毁栈
        case 5:{
            s = DestroyStack(s);
            break;
        } 
        //入栈
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
        //出栈
        case 7:{
            PopStack(s);
            break;
        }
      

        case 8:{
            Print(s);
            break;
        }
        //检测栈长度
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