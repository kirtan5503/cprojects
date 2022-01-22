#include <stdio.h>

main()
{
    int a, b,max;
    printf("enter number a\n");
    scanf("%d", &a);
 
    printf("enter number b\n");
    scanf("%d" , &b);
    max=(a>b)?a:b;
    printf("the largest no. is %d\n",max );

}