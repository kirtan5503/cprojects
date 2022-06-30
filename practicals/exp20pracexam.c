#include<stdio.h>

void swap (int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int num1,num2;
    printf("Enter the value of num 1:\n");
    scanf("%d",&num1);
    printf("Enter the value of num2:\n");
    scanf("%d",&num2);
    printf("before swapping the numbers are num1:%d  and num2 is %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swapping the numbers are num1 is %d and num2 is %d",num1,num2);
    return 0;
}