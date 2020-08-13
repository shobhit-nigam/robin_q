#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0;
	static char buf[20];
	fda = open("batch3", O_RDONLY);
	printf("batch3 fd = %d\n", fda);
	read(fda, buf ,9);
	printf("read data --> %s\n", buf);
	close(fda);
	return;
}
