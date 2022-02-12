/* PROGRAM TO PRINT DIAMETER,AREA,CIRCUMFERENCE OF CIRCLE*/
#include<stdio.h>
int main()
{
    float r,d,a,c;
    
    /*enter radius*/
    
    printf("enter the radius of circle\n");
    scanf("%f", &r);
    
    /*calculation of diameter,area and circumference*/
    
    d=(2*r);
    a=(3.14*r*r);
    c=(2*3.14*r);
    
    /*display diameter,area and circumference of circle*/
    
    printf("the diameter of the circle is %f\n", d);
    printf("the area of the circle is %f\n", a);
     printf("the circumference of the circle is %f\n", c);
    return 0;
}
