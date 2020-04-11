#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 10;
    int *s = (int *)malloc(size * sizeof(int));
    s[4] = 112;
    printf("%d", s[4]);
    system("pause");
    return 0;
}