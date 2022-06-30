#include<stdio.h>

void main()
{
    int r;
    float pi=3.14,area,c;
    printf("Enter your radius");
    scanf("%d",&r);
    area=pi*r*r;
    c=2*pi*r;
    printf("the area of the circle is %f",area);
    printf("The circumference of the circle is %f",c);

    
    
}