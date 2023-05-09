#include "main.h"

/**
 * get_bit - Function that returns the value of the bit given
 * @n: input
 * @index: is the index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int unknown = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	unknown <<= index;

	if (unknown & n)
		return (1);
	else
		return (0);
}
