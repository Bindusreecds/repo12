#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
int pid=0;
pid=fork();
if(pid==0){
printf("in parent process id of child is %d");
return 0;
}
