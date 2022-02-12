/*PROGRAN TO PRINT MAXIMUM OF TWO NUMBERS*/
#include <stdio.h>
int main()
{
    int a, b;
    
    /* enter two numbers from user */
    
    printf("enter two numbers from user \n");
    scanf("%d%d", &a, &b);
    
 /* if a is maximum*/
    
    if (a > b)
    {
        printf("max between two number is %d", a);
    }
    
    /* if b is maximum */
    
    else if(a<b)
    {
        printf("max between two number is %d", b);
    }
    
    /* if both are equal */
    else
    {
        printf("both number are equal");
    }
    return 0;
}
