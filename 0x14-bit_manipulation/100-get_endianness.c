#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0 if big endian,1 if small endian
 */
int get_endianness(void)
{
	int hey = 1;
	char *endian = (char *)&hey;

	if (*endian == 1)
		return (1);

	return (0);
}
