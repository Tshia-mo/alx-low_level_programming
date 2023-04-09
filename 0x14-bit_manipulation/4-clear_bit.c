#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0
 * @index: input
 * @n: input
 * Return: 1 if it works, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
