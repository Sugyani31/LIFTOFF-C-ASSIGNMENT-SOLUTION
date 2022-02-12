/*C program to check leap year using conditional operator */

#include <stdio.h>

int main()
{
    int year;
 
    /* Input year from user*/
    printf("Enter any year\n ");
    scanf("%d", &year);
    if(year%400==0 || year%4==0 && year%100!=0)
    {
        printf("LEAP YEAR");
    }
       else 
       {
           printf("NOT LEAP YEAR");
       }

    return 0;
}
