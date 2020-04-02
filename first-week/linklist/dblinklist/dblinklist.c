#include <stdio.h>
#include <stdlib.h>
typedef struct Linkedlist{
    struct Linkedlist * prior;
    int data;
    struct Linkedlist * next;
}Linkedlist;

void interface();

Linkedlist* InitList(Linkedlist * head, int n);//˫����Ĵ���

Linkedlist * InsertList(Linkedlist * head,int data,int add);//˫�������Ԫ�أ�add��ʾ����λ��

Linkedlist * DeleteList(Linkedlist * head,int data);//˫����ɾ��ָ��Ԫ��

void DestroyList(Linkedlist * head);

int SearchList(Linkedlist * head,int elem);//˫�����в���ָ��Ԫ��

Linkedlist *ChangeData(Linkedlist * head,int data,int newElem);//˫�����и���ָ��λ�ýڵ��д洢�����ݣ�add��ʾ����λ��

void print(Linkedlist * head);//���˫�����ʵ�ֺ���
int main() 
{
    Linkedlist * head=NULL;
    interface();
    int input;
    while (1)
    {
        
        printf("������������\n");
        while(scanf("%d",&input) != 1)
        {
            fflush(stdin);
            printf("�����������Ŷ~С����������������~~\n");
        }
        switch (input)
        {
        //�������ݣ�����1
        case 1:{
            
            int n;
            printf("������������Ҫ���ٸ��ڵ�:");
            //scanf("%d",&n);
            while(scanf("%d",&n) != 1)
            {
                fflush(stdin);
                printf("�����������Ŷ~С����������������~~\n");

            }         
            //����˫����
            head=InitList(head, n);
            
            break;
        }
        //������������2
        case 2:{
            
            print(head);
            break;
        }
        //�����������3
        case 3:{
            
            DestroyList(head);
            break;
        }
        //����ָ���ڵ㣬����4
        case 4:{
            
            int data;
            printf("��������Ҫ���ҵ����ݣ�");
            //scanf("%d", &data);
            while(scanf("%d",&data) != 1)
            {
            fflush(stdin);
            printf("�����������Ŷ~С����������������~~\n");

            }
            if(SearchList(head, data))
                printf("���ҳɹ�,��λ��Ϊ %d\n",SearchList(head, data));
            else 
                printf("�����������Ľڵ�\n");
            break;
        }
        //��ǰ����ڵ㣬����5
        case 5:{
            
            int data,data_new;
            printf("��������:");
            //scanf("%d",&q);
            while(scanf("%d",&data_new) != 1)
            {
                fflush(stdin);
                printf("�����������Ŷ~С����������������~~\n");

            }
            printf("���뱻����ڵ�����ݣ����ģ���:");
            //scanf("%d", &data);
            while(scanf("%d",&data) != 1)
            {
                fflush(stdin);
                printf("�����������Ŷ~С����������������~~\n");

            }
            InsertList(head,data_new,data);
            break;
        }
        //ɾ��ָ���ڵ㣬����6
        case 6:{
          
            int data_p, data_e;
            printf("Ҫɾ��������:");
            //scanf("%d", &data_p);
            while(scanf("%d",&data_p) != 1)
            {
                fflush(stdin);
                printf("�����������Ŷ~С����������������~~\n");

            }
            /*printf("����ʲô����");
            scanf("%d", &data_p);*/
            DeleteList(head, data_p);
            break;
        }
        //����ָ���ڵ㣬����7
        case 7:{
            int data,newelem;
            printf("�޸��ĸ����ݣ�:");
            while (scanf("%d",&data) != 1)
            {
                fflush(stdin);
                printf("��������ŶС����\n");
            }
            printf("���³�ʲô���ݣ�:");
            while (scanf("%d",&newelem) != 1)
            {
                fflush(stdin);
                printf("��������ŶС����\n");
            }
            ChangeData(head,data,newelem);
            break;

        }
        default:{
            break;}
        }
    }   
    return 0;
    

    
    //�ڱ��е� 3 ��λ�ò���Ԫ�� 7
    //head=InsertList(head, 7, 3);
    //print(head);
    //����ɾ��Ԫ�� 2
    //head=DeleteList(head, 2);
    //print(head);

    //printf("Ԫ�� 3 ��λ���ǣ�%d\n",SearchList(head,3));
    //���е� 3 ���ڵ��е����ݸ�Ϊ�洢 6
    //head = ChangeData(head,3,6);
    //print(head);
    
    
}

void interface()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~����1  ��ʼ������~~~~~~~\n");
    printf("~~~~~~~����2    �������~~~~~~~\n");
    printf("~~~~~~~����3    �������~~~~~~~\n");
    printf("~~~~~~~����4    ���ҽڵ�~~~~~~~\n");
    printf("~~~~~~~����5    ����ڵ�~~~~~~~\n");
    printf("~~~~~~~����6    ɾ���ڵ�~~~~~~~\n");
    printf("~~~~~~~����7    ���½ڵ�~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"); 
}

Linkedlist* InitList(Linkedlist * head, int n)
{
    head=(Linkedlist*)malloc(sizeof(Linkedlist));
    head->prior=NULL;
    head->next=NULL;
    head->data=0;
    Linkedlist * end=head;
    for (int i=0; i<n; i++) 
    {
        printf("����������:");
        int data;
        while (scanf("%d", &data) != 1)
        {
            fflush(stdin);
            printf("�����������Ŷ~С����������������~~\n");
        }
        //�½ڵ����ݴ���
        Linkedlist * body=(Linkedlist*)malloc(sizeof(Linkedlist));
        body->prior=NULL;
        body->next=NULL;
        body->data=data;
        //����ͷ�ڵ㣬����β�ڵ�
        end->next=body;
        body->prior=end;
        end=end->next;
    }
    return head;
}

Linkedlist * InsertList(Linkedlist * head,int data_new,int add)
{   
    if (head == NULL)
    {
        printf("��������\n");
        return 0;
    }
    //�½�������Ϊdata�Ľ��
    Linkedlist * temp=(Linkedlist*)malloc(sizeof(Linkedlist));
    temp->data=data_new;
    temp->prior=NULL;
    temp->next=NULL;
    //���뵽����ͷ��Ҫ���⿼��
    if (add == head->data) 
    {
        temp->next=head;
        head->prior=temp;
        head=temp;
        printf("successful!\n");
        return head;
    }
    else
    {
        Linkedlist * body=head;
        //�ҵ�Ҫ����λ�õ�ǰһ�����
        while (body->next != NULL)
        {
            if (add != body->data)
            {
                body = body->next;
            }
            //�ж�����Ϊ�棬˵������λ��Ϊ����β
            else if (body->next==NULL) 
            {
                body->next=temp;
                temp->prior=body;
                printf("successful!\n");
                return head;  
            }
            else
            {
                body->next->prior=temp;
                temp->next=body->next;
                body->next=temp;
                temp->prior=body;
                printf("successful!\n");
                return head;
            }
        }
    }
    printf("û���ҵ��ýڵ�\n");
    return head;
}

Linkedlist * DeleteList(Linkedlist * head,int data)
{
    if (head == NULL)
    {
        printf("��������\n");
        return 0;
    }
    Linkedlist * temp=head;
    //��������
    while (temp) {
        //�жϵ�ǰ������������data�Ƿ���ȣ�����ȣ�ժ���ý��
        if (temp->data==data)
        {
            temp->prior->next=temp->next;
            temp->next->prior=temp->prior;
            free(temp);
            printf("successful!\n");
            return head;
        }
        temp=temp->next;
    }
    printf("�������޸�����Ԫ��\n");
    return head;
}
//�������
void DestroyList(Linkedlist * head)
{
    if (head == NULL)
    {
        printf("��������\n");
        return;
    }
    Linkedlist * temp=head;
    while (temp != NULL)
    {
        Linkedlist * d = temp;
        temp=temp->next;
        free(d);        
    }
    printf("�Ѿ�ȫ��ɾ��������\n");
} 

//headΪԭ˫����elem��ʾ������Ԫ��
int SearchList(Linkedlist * head,int elem)
{
    if (head == NULL)
    {
        printf("��������\n");
        return 0;
    }
    //�½�һ��ָ��t����ʼ��Ϊͷָ�� head
    Linkedlist * t=head;
    int i=1;
    while (t->next != NULL) 
    {
        if (t->data != elem)
        {
            i++;
            t=t->next;
        }
        else if (t->data == elem)
        {
            printf("successful!\n");
            return i;
        }
        
    }
    //����ִ�����˴�����ʾ����ʧ��
    printf("�����������Ľڵ�\n");
    return 0;
}

//���º��������У�add ��ʾ���Ľ����˫�����е�λ�ã�newElem Ϊ�����ݵ�ֵ
Linkedlist *ChangeData(Linkedlist * head,int data,int newElem)
{
    if (head == NULL)
    {
        printf("��������\n");
        return 0;
    }
    Linkedlist * temp = head;
    //��������ɾ�����
    while(temp->next != NULL) 
    {
        if(temp->data == data)
            {
                temp->data=newElem;
                printf("successful!\n");
                return head;
            }
        temp = temp->next;
    }
    printf("û���ҵ��ýڵ㣡\n");
    return head;
}

//�������Ĺ��ܺ���
void print(Linkedlist * head)
{
    if(head == NULL)
    {
        printf("�������ڣ�\n");
        return;
    }
    Linkedlist * temp=head;
    while (temp)
    {
        if (temp->next==NULL)
        {
            printf("%d\n",temp->data);
        }
        else
        {
            printf("%d<->",temp->data);
        }
        temp=temp->next;
    }
}