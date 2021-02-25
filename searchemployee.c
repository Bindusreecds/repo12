#include<stdio.h>
struct employee
{
    int empid;
    char empname[20];
    char empcmpny[20];
}obj1[10];
struct employee obj2[10];
int main()
{ 
  int id,flag,index=0,i;
  FILE *fp;
  fp=fopen("employeedb","rb");
  printf("enter employee id to search");
  scanf("%d", &id);
    //while(employeedb!=NULL)
    while((fread(&obj2[i],sizeof(obj2),1,fp) ==1))
    {
      for(i=0;i<3;i++)
      {
        if(obj2[i].empid==id)
        {
         flag=1;
          printf("employee found");
          printf("%s %s", obj2[i].empname,obj2[i].empcmpny);
        break;
      }
      }
    }
  if(flag==0)
  {
    printf("not found");
  }
  fclose(fp);
}
  
