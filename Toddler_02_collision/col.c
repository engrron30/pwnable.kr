#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long hashcode = 0x21DD09EC;

unsigned long check_passwd(const char* p)
{
	int *ip = (int *) p;
	for (int j = 0; j < 5; j++)
	{
		printf("[LOOP %d] %d\n", j, ip[j]);
	}

	int res = 0, i = 0;
	printf("\n ############### RES ################ \n");
	for (i = 0; i < 5; i++)
	{
		res += ip[i];
		printf("[LOOP %d] res = %d\n", i, res);
	}

	return res;
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("usage : %s [passcode]\n", argv[0]);
		return 0;
	}

	if (strlen(argv[1]) != 20)
	{
		printf("Passcode should be greater than 20!\n");
		return 0;
	}

	int passwd_buf = check_passwd(argv[1]);
	if (hashcode == passwd_buf)
	{
		printf("Nice!\n");
	}
	printf("[COMPARING] hashcode=%lu argv[1]=%d\n", hashcode, passwd_buf);

	return 0;
}
