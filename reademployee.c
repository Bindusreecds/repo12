#include<stdio.h>
struct employee
{
    int empid;
    char empname[20];
    char empcmpny[20];
}obj1[10];
struct employee obj2[10];
int main()
{   int i;
    FILE *fp;
    fp=fopen("employeedb","rb");
    for(i=0;i<3;i++)
    {
    fread(&obj2[i],sizeof(obj2),1,fp);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %s",obj2[i].empid\n,obj2[i].empname \n,obj2[i].empcmpny);
    }
    fclose(fp);
}
