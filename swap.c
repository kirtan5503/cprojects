#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter Your two values\n");
    scanf("%d%d",&a,&b);

    temp=a;
    a=b;
    b=temp;
    printf("After Swapping\n a=%d\n b=%d\n",a,b);
    return 0;
}