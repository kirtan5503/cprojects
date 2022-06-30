#include<stdio.h>
#include<string.h>

void main()
{
    int a,d,n,i;
    float marks;
    char name[80];
    FILE *fp;
    printf("Enter number of students\n");
    scanf("%d",&n);
    fp=fopen("C:\\Users\\kirta\\OneDrive\\Documents\\c notes","w");
    for (i=0;i<n;i++)
    {
        printf("Enter your name");
        gets(name);
        printf("Enter your marks");
        scanf("%f",marks);
        fprintf(fp,"\name=%s,\n marks=%f\n",name,marks);
    
    }
    fclose(fp);

}