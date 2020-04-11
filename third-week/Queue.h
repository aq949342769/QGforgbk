#ifndef QUENE_H
#define QUENE_H

#include <stdio.h>
#include <stdlib.h>
typedef enum Status
{
    ERROR,
    SUCCESS
} Status;
typedef struct sQueue
{
    int *Arr;
    int front;
    int rear;
    int size;
} sQueue;
Status Queue(sQueue *s, int size);
Status isEmptyQueue(sQueue *s);
Status isFullQueue(sQueue *s);
Status getFontElem(sQueue *s, int *e);
Status clearQueue(sQueue *s);
Status destroyQueue(sQueue *s);
Status pushQueue(sQueue *s, int data);
Status popQueue(sQueue *s);
void print(sQueue *s);
Status getLength(sQueue *s, int *length);

#endif