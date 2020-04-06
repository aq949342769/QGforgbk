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
        //刷新菜单
        count++;
        while (count%10 == 0)
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
            if (s.bottom != NULL)
            {
                printf("the stack is exist! please destroy first!\n");
                break;
            }
            
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
            if (IsEmptyStack(s) == 1)
            printf("is empty\n");
            else if (IsEmptyStack(s) == 0)
            printf("is not empty\n");
            else
            printf("the stack is not exist\n");
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
            s = PushStack(s);
            printf("now the stack is ");
            Print(s);
            break;
        }
        //出栈
        case 7:{
            s = PopStack(s);
            printf("now the stack is ");
            Print(s);
            break;
        }
      
        //遍历栈元素
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