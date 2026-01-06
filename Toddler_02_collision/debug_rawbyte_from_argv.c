#include <stdio.h>

#define MAX_ARGC_NUM			2

int main(int argc, char *argv[])
{
	if (argc < MAX_ARGC_NUM)
	{
		printf("usage: debug <raw-bytes>\n");
		return 1;
	}

	return 0;
}
