#include <stdio.h>
#include <stdlib.h>

typedef struct LinkList
{
    int data;
    struct LinkList *next;
}LinkedList;
LinkedList *head = NULL;
LinkedList *end = NULL;
void interface()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~����1  ��ʼ������~~~~~~~\n");
    printf("~~~~~~~����2    �������~~~~~~~\n");
    printf("~~~~~~~����3    �������~~~~~~~\n");
    printf("~~~~~~~����4    ���ҽڵ�~~~~~~~\n");
    printf("~~~~~~~����5    ����ڵ�~~~~~~~\n");
    printf("~~~~~~~����6    ɾ���ڵ�~~~~~~~\n");
    printf("~~~~~~~����7    ��ת����~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"); 
}

void InitList(int data)//��ʼ������
{
    LinkedList *p = (LinkedList*)malloc(sizeof(LinkedList));//����һ���ڵ�
    p->data = data;
    p->next = NULL;

    if(head==NULL)//1.û�нڵ� 2.���нڵ㣬�Ӻ����
    {
        head = p;//ָ��p�Ѿ����ٵĽڵ�
        end  = p;
    }
    else
    {
        end->next = p;//β��ָ��p���ٵĽڵ�
        end = p;
    }
    printf("successful��\n");
}

void print()//����������нڵ�
{
    LinkedList *p=head;
    int count = 0;
    if(p == NULL)
    {
        printf("�����ǿյģ�����\n");
        return;
    }
    while (p != NULL)
    {
        ++count;
        printf("��%d���ڵ�����Ϊ��%d\n",count,p->data);
        p=p->next;
    }
    printf("\n");
}

void DestroyList()//�������
{
    
    if (head == NULL)
    {
        printf("�����ǿյģ�\n");
        return;
    }
    LinkedList *p = head;
        while (p != NULL)
        {
            LinkedList *d = p;    
            p = p->next;
            free(d);
        }
    head = NULL;
    end  = NULL;
    printf("�Ѿ�ȫ��ɾ��������\n");
} 

LinkedList* SearchList(int data)//��������(ָ������)
{
    LinkedList *p=head;
    while(p!=NULL)
    {
        if (data == p->data)
        {
            return p;//����ָ���ַ����ָ���ַ
        }
        p=p->next;
    }
    return NULL;
}

void InsertList(int q,int data)//�Ӻ����ڵ�
{
    if (head == NULL)
    {
        printf("����û�нڵ㣬������������\n");
        return;
    }
    LinkedList *p = SearchList(data);//��������ָ��
    if (p == NULL)
    {
        printf("û�иýڵ�\n");
        return;
    }
    LinkedList *temp = (LinkedList*)malloc(sizeof(LinkedList));
    temp->data = q;
    temp->next = NULL;
    if (p == end)//����ҵ��Ľڵ���β��
    {   
        end->next = temp;
              end = temp;
    }
    else//������м䣨����ͷ�������
    {
       temp->next = p->next; //��������
          p->next = temp;  //����ǰ��
    }
    printf("successful!\n");
} 

void DeleteList(int data_p)//ɾ��ָ���ڵ�
{
    if (head == NULL)//�������Ϊ��
    {
        printf("����Ϊ�գ����ȳ�ʼ��\n");
        return;
    }
    LinkedList *p = SearchList(data_p);
    if (p == NULL)//���û�иýڵ���Ϣ
    {
        printf("û�иýڵ���Ϣ����\n");
        return;
    }
    else if (head == end)//������ڵ�ֻ��һ���ڵ�
    {
        free(head);
        head = NULL;
        end  = NULL;
    }
    else if (head->next == end)//ֻ�������ڵ㣬�ж�ͷβ
    {
        if (end == p)
        {
            end = head;
            end->next = NULL;//����֪���ǵ�end��endָ��head
            ;//�ͷ�end�ڵ�
            free(p);
        }
        else if (head == p)//ͬ��
        {
            head == end;
            head->next == NULL;
            free(p);
        }
    }
    else//����ڵ����
    {
        if (p == head)//ɾ��ͷ
        {       
            head = head->next;
            free(p);
        }
        else if (p == end)//ɾ��β
        {
            LinkedList *LastButone = head;
            while (LastButone->next != end)//�ҵ������ڶ����ڵ�
                {LastButone = LastButone->next;}
            free(end);
            end = LastButone;
            end->next = NULL;
        }
        else//ɾ���м�ڵ�
        {
            LinkedList *Former = head;
            while (Former->next != p)//�ҵ�ǰһ���ڵ�
                {Former = Former->next;}
            Former->next = p->next;
            free(p);
        }   
    } 
    printf("successful!\n");   
}

void ReverseList()
{
    if (head == NULL)
    {
        printf("�����ǿյģ�\n");
        return;
    }
    LinkedList *pre = head;
    LinkedList *cur = pre->next;
    pre->next = NULL;
    end = pre;
    while(cur!= NULL)
    {
        LinkedList *temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;   
    }
    head = pre;
    printf("successful!\n");
}

int main()
{
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
        case 1:{
            //�������ݣ�����1
            int n, data;
            printf("������������Ҫ���ٸ��ڵ�:");
            //scanf("%d",&n);
            while(scanf("%d",&n) != 1)
            {
                fflush(stdin);
                printf("�����������Ŷ~С����������������~~\n");

            }
            for(int i=0;i<n;i++)
            {
                printf("����������data:\n");    
                //scanf("%d",&data);  
                while(scanf("%d",&data) != 1)
                {
                    fflush(stdin);
                    printf("�����������Ŷ~С����������������~~\n");
                }
                InitList(data);
            }
            break;
        }
        case 2:{
            //������������2
            print();
            break;
        }
        case 3:{
            //�����������3
            DestroyList();
            break;
        }
        case 4:{
            //����ָ���ڵ㣬����4
            int data;
            printf("��������Ҫ���ҵ����ݣ�");
            //scanf("%d", &data);
            while(scanf("%d",&data) != 1)
            {
            fflush(stdin);
            printf("�����������Ŷ~С����������������~~\n");

            }
            if(SearchList(data) != NULL)
                printf("���ҳɹ�,�ýڵ��ַΪ %p\n",SearchList(data));
            else 
                printf("�����������Ľڵ�");
            break;
        }
        case 5:{
            //�Ӻ����ڵ㣬����5
            int data,q;
            printf("�����������������\n");
            //scanf("%d",&q);
            while(scanf("%d",&q) != 1)
            {
                fflush(stdin);
                printf("�����������Ŷ~С����������������~~\n");

            }
            printf("���뱻����ڵ�����ݣ����ģ���\n");
            //scanf("%d", &data);
            while(scanf("%d",&data) != 1)
            {
                fflush(stdin);
                printf("�����������Ŷ~С����������������~~\n");

            }
            InsertList(q,data);
            break;
        }
        case 6:{
            //ɾ��ָ���ڵ㣬����6
            int data_p, data_e;
            printf("Ҫɾ��������");
            //scanf("%d", &data_p);
            while(scanf("%d",&data_p) != 1)
            {
                fflush(stdin);
                printf("�����������Ŷ~С����������������~~\n");

            }
            /*printf("����ʲô����");
            scanf("%d", &data_p);*/
            DeleteList(data_p);
            break;
        }
        case 7:{
            //����ת������7
            ReverseList();
            break;
        }
        default:{
            break;}
        }
    }   
    return 0;
}
