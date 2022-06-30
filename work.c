#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    int salary;
};
void main()
{
    struct employee e[10],temp;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter your employee id\n");
        scanf   ("%d",&(e[i].id));
        printf("Enter your employee salary\n");
        scanf   ("%d",&(e[i].salary));
    }
    for(i=0;i<5;i++)
    {
    for(int j=0; j<5-i;j++)
    {
        if((e[j].salary)> (e[j+1].salary))
        {
            temp=e[j];
            e[j]=e[j+1];
            e[j+1]=temp;
        }
    }
    }

printf("**********Employee Record********\n id salary\n");
for(i=0;i<5;i++)
{
    printf("%d      ",e[i].id);
    printf("%d\n",e[i].salary);

}
}