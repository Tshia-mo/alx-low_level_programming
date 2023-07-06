#include "main.h"

/**
 * set_bit - Function that sets the value of a bit
 * @n: number of bits
 * @index: is a index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}

	return (-1);
}
