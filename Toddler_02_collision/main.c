#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char *cp = "1234";
	int *ip = (int *) cp;

	printf("ip = %d\n", *ip);
	return 0;
}
