#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to no given index
 * @n: bit number
 * @index: unsigned input
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~number);
			return (1);
		}

		return (-1);
}
