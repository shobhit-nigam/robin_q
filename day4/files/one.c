#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void main()
{
	int fda=0;
	fda = open("batch3", O_RDONLY);
	printf("batch3 fd = %d\n", fda);
	return;
}
