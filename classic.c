#include<stdio.h>
int main()
{   
    int a,b,c,d,e;
    e=100000;
    printf("Enter your account number\n");
    scanf("%d",&a);
    if(a==5503)
    {printf("Enter your password\n");
     scanf("%d",&b);
     if(b==1234)
     {
     printf("Enter the ammount to be withdrawn\n$");  
     scanf("%d",&c);
     d=e-c;
     printf("Your balance is $%d\n  ****collect the money**** ",d);
     }
     else{
     printf("Enter correct password\n");}

    }
    else
    printf("Enter correct account number\n");

return 0;
}
