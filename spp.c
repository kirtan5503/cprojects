#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter number a\n");
    scanf("%d", &a);
 
    printf("enter number b\n");
    scanf("%d" , &b);

    printf("the sum of numbers is %d\n" , a+b);
    printf("the subtraction of numbers is %d\n" , a-b);
    printf("the division of numbers is %d\n" , a/b);
    printf("the multiplication of numbers is %d\n" , a*b);
    

    return 0;
}
