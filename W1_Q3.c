 /*PROGRAM TO PRINT WHETHER A NUMBER IS EVEN OR ODD*/
#include <stdio.h>
int main()
{
    int num;
 
 /*enter any number from user*/
 
    printf("enter any number\n");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
      
      /* if num%2==0 */
      
        printf("even");
        break;
    default:
      
      /*if num%2!=0*/
      
        printf("odd");
        break;
    }
    return 0;
}
