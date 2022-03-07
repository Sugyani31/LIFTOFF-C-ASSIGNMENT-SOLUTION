#include<stdio.h>
int main()
{
    int i,a[10],b=0,c=0;
    printf("enter 10 numbers:\n");
    for( i = 0 ; i < 10 ; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        { 
            b=b+a[i];
        }
        else
        c=c+a[i];
        
    }
    printf("sum of even terms is %d\n", b);
    printf("sum of odd terms is %d", c);
    return 0;
}