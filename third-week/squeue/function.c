#include "Queue.h"
// 队列初始化
Status initQueue(sQueue *s, int size)
{

    if (size == 0)
    {
        printf("please enter a corret number\n");
        return ERROR;
    }
    s->size = size + 1;
    s->Arr = (int *)malloc((s->size) * sizeof(int));
    if (s->Arr == NULL)
    {
        printf("初始化失败\n");
        exit(0);
    }
    else
    {
        s->front = 0;
        s->rear = 0;
        return SUCCESS;
    }
}
// 判断是否为空
Status isEmptyQueue(sQueue *s)
{
    if (s->Arr == NULL)
        return SUCCESS;
    else if (s->front == s->rear)
    {
        return SUCCESS;
    }

    return ERROR;
}
// 判断是否满
Status isFullQueue(sQueue *s)
{
    if (s->Arr == NULL)
    {
        return ERROR;
    }

    if (((s->rear + 1) % s->size == s->front))
    {
        return SUCCESS;
    }
    else
    {
        return ERROR;
    }
}
// 得到队头元素
Status getFontElem(sQueue *s, int *e)
{
    if (s->Arr == NULL)
    {
        return ERROR;
    }
    else if (s->front == s->rear)
    {
        return ERROR;
    }
    else
    {
        *e = s->Arr[s->front];
        return SUCCESS;
    }
}
// 销毁队
Status destroyQueue(sQueue *s)
{
    free(s->Arr);
    s->Arr = NULL;
    s->front = 0;
    s->rear = 0;
    s->size = 0;
    return SUCCESS;
}
// 清空队
Status clearQueue(sQueue *s)
{
    if (s->Arr == NULL)
    {
        return ERROR;
    }

    else
    {
        int size = s->size;
        destroyQueue(s);
        initQueue(s, size);
        return SUCCESS;
    }
}
// 入队
Status pushQueue(sQueue *s, int data)
{
    if (s->Arr == NULL)
    {
        return ERROR;
    }

    else if (isFullQueue(s) != 1)
    {
        s->Arr[s->rear] = data;
        s->rear = (s->rear + 1) % s->size;
        return SUCCESS;
    }
    return ERROR;
}
//出队
Status popQueue(sQueue *s)
{
    if (isEmptyQueue(s))
    {
        return ERROR;
    }
    s->front = (s->front + 1) % s->size;
    return SUCCESS;
}

// 遍历
void print(sQueue *s)
{
    if (s->Arr == NULL)
    {
        printf("please init first!\n");
        return;
    }

    printf("front[");
    int i = s->front;
    while (i != s->rear) //这里要注意一下循环遍历！
    {
        printf("%d-", s->Arr[i]);
        i++;
        i = i % s->size;
    }

    printf("]rear\n");
}
//检测队列长度
Status getLength(sQueue *s, int *length)
{
    if (s->Arr == NULL)
    {
        return ERROR;
    }
    *length = s->rear - s->front;
    return SUCCESS;
}