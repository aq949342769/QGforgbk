#include<stdio.h>
#include<stdlib.h>
void test(int **p,int *b)
{
    *p=b;
    
}
int main()
{
    int *p;
    int b[1]={3};
    test(&p,b);
    printf("%d",*p);
    system("pause");

    return 0;
}