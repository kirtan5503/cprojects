#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,b,c,d,e,n;
    printf("Enter a five digit number\n");
    scanf("%d",&n);
    if(9999<n>99999)
    {
      a=n%10;
      b=(n%100)/10;
      c=(n%1000)/100;
      d=(n%10000)/1000;
      e=n/10000;
      printf("no.a%d\n",a);
      printf("no.b%d\n",b);
      printf("no.c%d\n",c);
      printf("no.d%d\n",d);
      printf("no.e%d\n",e);
    }
 printf("Enter a five digit number\n");

return 0;
}