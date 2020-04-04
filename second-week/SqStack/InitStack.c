#include "header/SqStack.h"
//指针的传递也是备份传递，不能使原指针地址发生改变，想要无返回值得到指针地址，可以通过指向指针的指针这种办法，即在传递的指针参数的时候加上&，然后形参使用**
 Status InitStack(SqStack **s,int size)//通过指针的指针实现地址传递
 {
    (*s)->size = size;
    (*s)->bottom = (int *)malloc(((*s)->size) * sizeof (int));
    if ((*s)->bottom == NULL)
    {
        printf("初始化失败\n");
        return ERROR;      
    }
    else
    {
        (*s)->top = (*s)->bottom;
        (*s)->size = size; 
        return SUCCESS;
    }   
 }