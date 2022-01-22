#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,l,m,n,p,o,q,e,f,g;
    p=100000;
    o=1000000;
    q=100000000;
    printf("Enter your card number:\n");
    scanf("%d",&a);
    if (a==1800)
    {
        printf("Enter your registered Master card password:\n");
        scanf("%d",&x);

        if (x==5503)
        {
            printf("Enter the amount to be withdrawn:\n");
            scanf("%d",&l);
            
            if (l>=p)
            {
                e=p-l;
                printf("**** Collect Your Amount ****");
                printf("###  Your balance is: $%d",e);
            }
            else
            printf("You do not have that much balance dumbass");
        }
    }
    if (a==5172)
    {
        printf("Enter your Visa card number");
        scanf("%d",&y);
        
    }
    return 0;
}