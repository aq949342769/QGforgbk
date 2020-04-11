#include "Queue.h"
// ���г�ʼ��
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
        printf("��ʼ��ʧ��\n");
        exit(0);
    }
    else
    {
        s->front = 0;
        s->rear = 0;
        return SUCCESS;
    }
}
// �ж��Ƿ�Ϊ��
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
// �ж��Ƿ���
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
// �õ���ͷԪ��
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
// ���ٶ�
Status destroyQueue(sQueue *s)
{
    free(s->Arr);
    s->Arr = NULL;
    s->front = 0;
    s->rear = 0;
    s->size = 0;
    return SUCCESS;
}
// ��ն�
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
// ���
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
//����
Status popQueue(sQueue *s)
{
    if (isEmptyQueue(s))
    {
        return ERROR;
    }
    s->front = (s->front + 1) % s->size;
    return SUCCESS;
}

// ����
void print(sQueue *s)
{
    if (s->Arr == NULL)
    {
        printf("please init first!\n");
        return;
    }

    printf("front[");
    int i = s->front;
    while (i != s->rear) //����Ҫע��һ��ѭ��������
    {
        printf("%d-", s->Arr[i]);
        i++;
        i = i % s->size;
    }

    printf("]rear\n");
}
//�����г���
Status getLength(sQueue *s, int *length)
{
    if (s->Arr == NULL)
    {
        return ERROR;
    }
    *length = s->rear - s->front;
    return SUCCESS;
}