 /*PROGRAM TO PRINT WHETHER A NUMBER IS EVEN OR ODD*/
#include <stdio.h>
int main()
{
    int num;
    printf("enter any number\n");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
        printf("even");
        break;
    default:
        printf("odd");
        break;
    }
    return 0;
}