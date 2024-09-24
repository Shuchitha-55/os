#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
pid_t p=fork();
if(p==0)
{
printf("I am a child process with id",getpid());
printf("My parent id is %d",getpid());
}
else{
printf("fork fail");
exit(1);
}
}
