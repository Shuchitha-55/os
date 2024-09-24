
#include<unistd.h>
#include<stdio.h>
int main()
{
char *cmnd="ls";
char *arg_list[]={"ls","-1",NULL};
printf("Before execvp()\n");
int status= execvp(cmnd,arg_list);
printf("Status: %d\n",status);
}

