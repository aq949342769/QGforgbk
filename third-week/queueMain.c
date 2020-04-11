#include "Queue.h"
#include "interface.c"
#include "function.c"

int main()
{
    sQueue Queue;
    Queue.Arr = NULL;
    Queue.front = 0;
    Queue.rear = 0;
    Queue.size = 0;

    int option;
    int input_times = 6;
    while (1)
    {
        //刷新菜单
        input_times++;
        while (input_times % 7 == 0)
        {
            system("cls");
            interface();
            printf("please enter your option( only return the first chosen option )\n");
            break;
        }
        //选择菜单

        scanf("%d", &option);
        while (option < 1 || option > 10)
        {
            fflush(stdin);
            printf("enter failed,check and try again\n");
            scanf("%d", &option);
        }
        fflush(stdin);
        switch (option)
        {
        //初始队列
        case 1:
        {
            if (Queue.Arr != NULL)
            {
                printf("the queue is exist! please destroy first!\n");
                break;
            }

            int size;
            printf("input the queue size you want:");
            while (scanf("%d", &size) != 1)
            {
                fflush(stdin);
                printf("enter failed,check and try again\n");
            }
            fflush(stdin);
            if (initQueue(&Queue, size))
                printf("success!\n");
            break;
        }
        //判断栈是否为空
        case 2:
        {
            if (isEmptyQueue(&Queue) == 1)
                printf("is empty or not exist\n");
            else if (isEmptyQueue(&Queue) == 0)
                printf("is not empty\n");
            break;
        }
        case 3:
        {
            if (isFullQueue(&Queue) == 1)
                printf("is full\n");
            else if (isFullQueue(&Queue) == 0)
                printf("not full\n");
            break;
        }
        //得到队头元素
        case 4:
        {
            int e;
            if (getFontElem(&Queue, &e))
                printf("the top element is %d\n", e);
            else
                printf("the quene is emtpy or not exist\n");
            break;
        }
        //清空栈
        case 5:
        {
            if (clearQueue(&Queue))
                printf("the stack is clear now\n");
            else
                printf("the stack is empty or not exist\n");
            break;
        }
        //销毁队
        case 6:
        {
            if (destroyQueue(&Queue))
                printf("the queue was destroied!\n");
            else
                printf("the queue is not exist\n");
            break;
        }
        //入队
        case 7:
        {
            if (Queue.Arr == NULL)
            {
                printf("the stack is not exist\n");
                break;
            }
            if (isFullQueue(&Queue))
            {
                printf("the queue is fulled\n");
                break;
            }

            int data;
            printf("data:");
            while (scanf("%d", &data) != 1)
            {
                fflush(stdin);
                printf("enter failed, check your data and try again\n");
            }
            fflush(stdin);
            if (pushQueue(&Queue, data))
            {
                printf("push success! now the queue is ");
                print(&Queue);
                break;
            }

            break;
        }
        //出队
        case 8:
        {
            if (popQueue(&Queue))
            {
                printf("pop success! now the stack is ");
                print(&Queue);
                break;
            }
            else
                printf("the queue is not exit or empty!\n");
            break;
        }

        //遍历栈元素
        case 9:
        {
            if (Queue.Arr == NULL || isEmptyQueue(&Queue) == 1)
            {
                printf("the stack is empty or not exist\n");
                break;
            }
            print(&Queue);
            break;
        }
        //检测栈长度
        case 10:
        {
            int length;
            if (getLength(&Queue, &length)) //bug，命名
                printf("the length of the queue is %d\n", length);
            else
                printf("the queue is empty or not exist\n");
            break;
        }
        default:
        {
            break;
        }
        }
    }

    return 0;
}