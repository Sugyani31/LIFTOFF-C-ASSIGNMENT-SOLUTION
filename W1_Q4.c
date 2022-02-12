/*PROGRAM TO DISPLAY ALL ARITHMATIC OPERATIONS*/
#include<stdio.h>
int main()
{
    int a,b,n;
    
    /* input two numbers from user*/
    
    printf("enter the two numbers\n");
    scanf("%d%d", &a, &b);
    printf("enter your choice\n");
    scanf("%d", &n);
    
    /*perform all arithmatic operation*/
    
    switch (n)
    {
    case 1:printf("sum=%d", a+b);
        break;
     case 2:printf("difference=%d", a-b);
        break;
     case 3:printf("multiplication=%d", a*b);
        break;
         case 4:printf("division=%d", a/b);
        break;
    default:
    printf("go to different code");
        break;
    }
    return 0;
}
