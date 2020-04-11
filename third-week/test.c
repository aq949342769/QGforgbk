#include <stdio.h>
#include <stdlib.h>
int print()
{
    printf("hjell");
    return 0;
}
int main()
{

    while (1)
    {
        int option = 0;
        scanf("%d", &option);
        fflush(stdin);
        while (option < 1 || option > 10)
        {
            fflush(stdin);
            printf("enter failed,check and try again\n");
            scanf("%d", &option);
        }
        fflush(stdin);
        printf("%d\n", option);
    }
    return 0;
}