#include<stdio.h>

int main ()
{
    int n;
    printf("Enter your marks ");
    scanf("%d", n);

 if(n>=90)
    {       
        printf("Your grade is A");
    }
    else if (n>=70)
    {
        printf("Your grade is B");
    }
    else if (n>=60)
    {
        printf("Your grade is C ");
    }
    else if (n>=40)
    {
        printf("Your grade is E");
    }

    return 0;
}