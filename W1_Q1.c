/*PROGRAM TO PRINT BASIC DETAILS OF A STUDENT*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char name[50] ,branch[50] ,hobbies[200];
    int reg_no;
    

/*storing information*/

    printf("enter your name\n");
    scanf("%s", &name);

 printf("enter your registration number\n");
    scanf("%d", &reg_no);

    printf("enter your branch\n");
    scanf("%s", &branch);

    printf("enter your hobbies\n");
    scanf("%s", &hobbies);
printf("\n\n");

    /*displaying information*/
    
    printf("student details are\n");

    printf("name- %s\n", name);
     printf("regno- %d\n", reg_no);
    printf("branch- %s\n",branch);
    printf("hobbies- %s\n",hobbies);

    
    return 0;
} 
