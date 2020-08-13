#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0;
	static char buf[20];
	printf("opening for reading\n");
	fda = open("thanos", O_RDONLY);
	printf("opened, now will read\n");
	read(fda, buf, 10);
	printf("read data -->%s\n", buf);
	close(fda);
	return;
}
