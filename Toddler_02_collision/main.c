#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Start with a character array of 1234 
	 *
	 * CHARACTER | ASCII (hex) | ASCII (dec)
	 * ----------+-------------+------------
	 *    '1'    |    0x31     |    49
	 *    '2'    |    0x32     |    50
	 *    '3'    |    0x33     |    51
	 *    '4'    |    0x34     |    52
	 * */
	const char *cp = "1234";

	/* CPU (most likely x86, used in Linux/PCs) is little-endian.
	 * That means the least significant byte is stored first in memory.
	 * */
	int *ip = (int *) cp;

	// Printing the string "1234" will be 
	printf("ip = %d\n", *ip);

	return 0;
}
