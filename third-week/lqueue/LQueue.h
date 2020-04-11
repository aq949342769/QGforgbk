#ifndef LQUEUE_H_INCLUDED
#define LQUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
//��ʽ���нṹ
typedef struct node
{
    int data;          //������ָ��
    struct node *next; //ָ��ǰ������һ���
} Node;

typedef struct Lqueue
{
    Node *front; //��ͷ
    Node *rear;  //��β
    int length;  //���г���
} LQueue;

typedef enum Status
{
    ERROR,
    SUCCESS
} Status;
Status initLQueue(LQueue *s);
Status isEmpty(LQueue *s);
Status getFrontElem(LQueue *s, int *e);
Status clear(LQueue *s);
Status destroy(LQueue *s);
Status push(LQueue *s, int data);
Status pop(LQueue *s);
Status print(LQueue *s);

#endif