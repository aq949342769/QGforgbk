#include "header/SqStack.h"
//ָ��Ĵ���Ҳ�Ǳ��ݴ��ݣ�����ʹԭָ���ַ�����ı䣬��Ҫ�޷���ֵ�õ�ָ���ַ������ͨ��ָ��ָ���ָ�����ְ취�����ڴ��ݵ�ָ�������ʱ�����&��Ȼ���β�ʹ��**
 Stack InitStack(Stack s,int size)//ͨ��ָ���ָ��ʵ�ֵ�ַ����
 {
    s.size = size;
    s.bottom = (int *)malloc((s.size) * sizeof (int));
    if (s.bottom == NULL)
    {
        printf("��ʼ��ʧ��\n");
        exit(0);    
    }
    else
    {
        s.top = s.bottom; 
        return s;
    }   
 }