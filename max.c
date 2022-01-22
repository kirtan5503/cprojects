#include <stdio.h>

int main()
{
    int a,b,max;
    printf("Enter two values\n");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    printf("the maximum No. is%d",max);
    
    return 0;
}