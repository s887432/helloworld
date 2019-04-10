#include <stdio.h>
#include <unistd.h>		// sleep

int main(int argc, char *argv[])
{
	for(int i=0; i<10; i++)
	{
		printf("Hello World!!!\n\r");
		sleep(1);	
	}
	return 0;
}

// end of file

