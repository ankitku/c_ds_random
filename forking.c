#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
pid_t pid;

pid = fork();
	if(pid==0)
	execlp("/bin/ls","ls -l",NULL);
	else
{
	wait(NULL);
	printf("child complete");
	exit(0);
}
}
