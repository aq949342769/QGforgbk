#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef  struct StackNode
{
	ElemType data;
	struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef  struct  LinkStack
{
	LinkStackPtr top;
	int	count;
}LinkStack;

int pushLStack(LinkStack *s)
{
   
    
    LinkStackPtr new = (LinkStackPtr)malloc(sizeof(StackNode));
    //new->next = s;
    
    return 1;
    
}
int main()
{
    LinkStack s;
    pushLStack(&s);
    printf("111");
    return 0;
}