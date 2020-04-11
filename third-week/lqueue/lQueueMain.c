#include "LQueue.h"
#include "interface.c"
#include "function.c"

int main()
{
    LQueue q;
    q.front = NULL;
    q.rear = NULL;
    q.length = -1;

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
        int option = 0;
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
            if (initLQueue(&q) == 0)
            {
                printf("the queue is exist! please destroy first!\n");
                break;
            }
            else
                printf("success!\n");
            break;
        }
        //判断栈是否为空
        case 2:
        {
            if (q.length == -1)
                printf("queue isn't exist\n");
            else if (isEmpty(&q) == 0)
                printf("is not empty \n");
            else
                printf("is empty\n");
            break;
        }
        //判满（一般不可能）
        case 3:
        {
            if (q.length == -1)
            {
                printf("queue isn't exist\n");
            }
            else
                printf("not full\n");
            break;
        }
        //得到队头元素
        case 4:
        {
            if (q.length == -1)
            {
                printf("queue isn't exist\n");
                break;
            }
            int e;
            if (getFrontElem(&q, &e))
                printf("the top element is %d\n", e);
            else
                printf("the quene is emtpy\n");
            break;
        }
        //清空栈
        case 5:
        {
            if (q.length == -1)
            {
                printf("queue isn't exist\n");
                break;
            }
            if (clear(&q))
                printf("the stack is clear now\n");
            else
                printf("the stack is empty\n");
            break;
        }
        //销毁队
        case 6:
        {
            if (q.length == -1)
            {
                printf("queue isn't exist\n");
                break;
            }
            destroy(&q);
            printf("the queue was destroied!\n");

            break;
        }
        //入队
        case 7:
        {
            if (q.length == -1)
            {
                printf("queue isn't exist\n");
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
            push(&q, data);
            printf("push success! now the queue is ");
            print(&q);
            break;
        }
        //出队
        case 8:
        {
            if (q.length == -1)
            {
                printf(" queue isn't exist\n");
                break;
            }
            if (pop(&q))
            {
                printf("pop success! now the stack is ");
                print(&q);
                break;
            }
            else
                printf("queue is empty!\n");
            break;
        }

        //遍历栈元素
        case 9:
        {

            if (q.length == -1)
            {
                printf(" queue isn't exist\n");
                break;
            }
            if (print(&q) == 0)
                printf("queue is empty\n");
            break;
        }
        //检测长度
        case 10:
        {
            if (q.length == -1)
            {
                printf(" queue isn't exist\n");
                break;
            }
            printf("queue length is %d\n", q.length);
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