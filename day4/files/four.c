#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0;
	static char buf[20];
	fda = open("new_a", O_WRONLY);
	printf("%d opened a file\n", getpid());
	printf("new_a fd = %d\n", fda);
	read(0, buf, 11);
	write(1, buf, 11);
	write(fda, buf, 11);
	close(fda);
	return;
}
