#include "header/SqStack.h"
//ָ��Ĵ���Ҳ�Ǳ��ݴ��ݣ�����ʹԭָ���ַ�����ı䣬��Ҫ�޷���ֵ�õ�ָ���ַ������ͨ��ָ��ָ���ָ�����ְ취�����ڴ��ݵ�ָ�������ʱ�����&��Ȼ���β�ʹ��**
 Status InitStack(SqStack **s,int size)//ͨ��ָ���ָ��ʵ�ֵ�ַ����
 {
    (*s)->size = size;
    (*s)->bottom = (int *)malloc(((*s)->size) * sizeof (int));
    if ((*s)->bottom == NULL)
    {
        printf("��ʼ��ʧ��\n");
        return ERROR;      
    }
    else
    {
        (*s)->top = (*s)->bottom;
        (*s)->size = size; 
        return SUCCESS;
    }   
 }