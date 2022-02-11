/*PROGRAN TO PRINT MAXIMUM OF TWO NUMBERS*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the number a\n", a);
    scanf("%d", &a);
    printf("enter the nuber b\n", b);
    scanf("%d", &b);
    if (a > b)
    {
        printf("max between two number is %d", a);
    }
    else
    {
        printf("max between two number is %d", b);
    }
    return 0;
}
