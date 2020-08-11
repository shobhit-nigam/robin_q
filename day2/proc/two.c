#include<stdio.h>
#include<unistd.h>

void main()
{
	int pid=0, ppid=0;
	pid = getpid();
	ppid = getppid();
	printf("my proc id = %d\n", pid);
	printf("my parent proc id = %d\n", ppid);
	sleep(15);
	return;
}
