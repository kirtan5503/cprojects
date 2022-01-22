#include<stdio.h>

int main()
{   
    int n,a,b,c;
    printf("Enter a Three digit number\n");
    scanf("%d\n",n);
    a=n%10;
    b=(n%100)/10;
    c=n/100;
    printf("This is your 100th place number =%d\n",c);
    printf("This is your 10th place number =%d\n",b);
    printf("This is your units place number =%d\n",a);
    return 0;
}