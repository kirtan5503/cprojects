#include <stdio.h>
int main ()
{
    int a,b,c;
    char choice;
    
    printf("Enter your number\n ");
    scanf("%d",&a);
    
    printf(" enter your operator\n");
    scanf("%c",&choice);

    printf("Enter your number\n ");
    scanf("%d",&b);

    switch (choice)
    {
    case'+':
        printf("%d+%d=%d", a,b,c);
        
        break;
    
    default:
      printf("Error! operator is not correct");
  }
    
    

   return 0;

}