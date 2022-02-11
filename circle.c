/* PROGRAM TO PRINT DIAMETER,AREA,CIRCUMFERENCE OF CIRCLE*/
#include<stdio.h>
int main()
{
    float r,d,a,c;
    printf("enter the radius of circle\n");
    scanf("%f", &r);
    d=(2*r);
    a=(3.14*r*r);
    c=(2*3.14*r);
    printf("the diameter of the circle is %f\n", d);
    printf("the area of the circle is %f\n", a);
     printf("the circumference of the circle is %f\n", c);
    return 0;
}