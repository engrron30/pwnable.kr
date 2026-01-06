#include <stdio.h>
#include <stdlib.h>

#define MAX_ARGC_NUM			2
#define BIN_NAME_ARGC_NUM		0
#define RAW_BYTE_ARGC_NUM		1

int main(int argc, char *argv[])
{
	if (argc < MAX_ARGC_NUM)
	{
		printf("usage: debug <raw-bytes>\n");
		return 1;
	}

	printf("raw_byte: 0x%x (%d)\n", argv[RAW_BYTE_ARGC_NUM], atoi(argv[RAW_BYTE_ARGC_NUM]));

	return 0;
}
