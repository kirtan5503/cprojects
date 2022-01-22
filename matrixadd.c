#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10];
    int n,m,i,j;

    printf("Enter your row and column of matrix: ");
    scanf("%d%d",&n,&m);

    printf("Enter your matrix A elements\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter your matrix B elements\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

return 0;
}