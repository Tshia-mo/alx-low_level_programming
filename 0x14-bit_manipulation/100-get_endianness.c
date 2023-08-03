#include "main.h"

/**
 * get_endianness - Function that checks endiannes
 *
 * Return: 0. (success)
 */
int get_endianness(void)
{
	short int num = 0x1234;
	char *ptr = (char *)&num;

	if (ptr[0] == 0x34)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
