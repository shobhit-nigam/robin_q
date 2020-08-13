#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0;
	printf("opening for writing\n");
	fda = open("thanos", O_WRONLY);
	printf("opened, now will write\n");
	write(fda, "let the force be with you", 26);
	printf("written, will now exit\n");
	sleep(20);
	close(fda);
	return;
}
