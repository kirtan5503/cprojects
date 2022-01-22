#include<stdio.h>
int main()
{

int a,b,c,d,e,i;
d=100000;

printf("Enter your Account Number\n");
scanf("%d",&a);
printf("Enter your password\n");
scanf("%d",&e);
if(e==1234)
{

printf("Enter the amount to be withdrawn\n");
scanf("%d",&b);

c=d-b;
printf("collect the money and receipt\n");
printf("The balance amount is %d\n",c);
}
else 
{printf("Enter correct password");
}
return 0;
}

