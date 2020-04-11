Status initLQueue(LQueue *s) //初始化
{
    if (s->length != -1)
    {
        return ERROR;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        exit(0);
    }

    s->length = 0;
    s->front = newNode;
    s->rear = newNode;
    return SUCCESS;
}
Status isEmpty(LQueue *s) //判断是否空
{
    if (s->length > 0)
    {
        return ERROR;
    }
    else
        return SUCCESS;
}
Status getFrontElem(LQueue *s, int *e) //获取队头
{
    if (s->length == 0)
    {
        return ERROR;
    }
    *e = s->front->data;
    return SUCCESS;
}
Status clear(LQueue *s) //清空
{
    if (s->length == 0)
    {
        return ERROR;
    }
    Node *temp = s->front;
    while (s->length != 0)
    {
        s->front = s->front->next;
        free(temp);
        s->length--;
    }
    return SUCCESS;
}
Status destroy(LQueue *s) //销毁
{
    clear(s);
    free(s->front);
    s->front == NULL;
    s->rear == NULL;
    s->length = -1;
    return SUCCESS;
}
Status push(LQueue *s, int data) //入队
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        exit(0);
    }
    newNode->data = data;
    s->length++;
    s->rear->next = newNode;
    s->rear = s->rear->next;
    return SUCCESS;
}
Status pop(LQueue *s) //出队
{
    if (s->length == 0)
    {
        return ERROR;
    }
    Node *temp = s->front;
    s->front = s->front->next;
    free(temp);
    s->length--;
    return SUCCESS;
}
Status print(LQueue *s) //遍历
{
    printf("front[");
    Node *temp = s->front->next;
    for (int i = 0; i < s->length; i++)
    {
        printf("%d-", temp->data);
        temp = temp->next;
    }
    printf("]rear\n");
    return SUCCESS;
}
