#include<stdio.h>
#include<unistd.h>

void main()
{
	int pid=0;
	pid = getpid();
	printf("my proc id = %d\n", pid);
	return;
}
