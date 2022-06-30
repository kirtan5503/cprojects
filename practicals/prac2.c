#include<stdio.h>

void main()
{
    int a,b,temp;
    printf("type any two numbers");
    scanf("%d %d",&a,&b);
    printf("The two numbers are %d %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The two numbers are %d %d",a,b);
    
}