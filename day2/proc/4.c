#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void funca()
{
	printf("sigterm handled no big deal\n");
	return;
}
void funcb()
{
	printf("talk to my hand\n");
	return;
}

void main()
{
	int pid=0, i=0;
	pid = getpid();
	signal(SIGTERM, funca);
	signal(SIGINT, funcb);
	signal(SIGKILL, funcb);
	for (i=0; 1; i++)
	{
		printf("%d running since %d secs\n", pid, i);
		sleep(1);
	}
	return;
}
