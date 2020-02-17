#include <stdio.h>

int fcall(void)
{

	static int j = 1;
	return(j++);
}


int main(void)
{
	int i;

	i = fcall();
	printf("%d\n", i);

	i = fcall();
	printf("%d\n", i);
}
