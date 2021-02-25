#include<stdio.h>
struct employee
{
    int empid;
    char empname[20];
    char empcmpny[20];
}obj1[10];
int main()
{   int i;
    FILE *fp;
    fopen("employeedb","rb");
    for(i=0;i<3;i++)
    {
    fread(&obj1[i],sizeof(obj1),1,fp);
    }
    for(i=0;i<3;i++)
    {
        printf("%d",obj1[i]);
    }
    fclose(fp);
}
