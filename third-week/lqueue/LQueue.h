#ifndef LQUEUE_H_INCLUDED
#define LQUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
//链式队列结构
typedef struct node
{
    int data;          //数据域指针
    struct node *next; //指向当前结点的下一结点
} Node;

typedef struct Lqueue
{
    Node *front; //队头
    Node *rear;  //队尾
    int length;  //队列长度
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