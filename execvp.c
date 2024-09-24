#include<stdio.h>
int main()
{
char *cmnd="ls";
char *arg_list[]={"ls","-1",NULL};
printf("Before execvp()\n");
printf("Creating another process using fork()\n");
pid_t p=fork();
int status=0;
if(p==0)
{
printf("Child Process\n"); 
int status= execvp(cmnd,arg_list);
if(status==-1)
{
printf("Incorrect Termination\n");
}
}
else
{
printf("Parent Process\n");
printf("Status: %d\n",status);
printf("Now this line will be executed\n");
}
}
