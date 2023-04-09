#include "main.h"

/**
 * get_bit - Function that returns that value of the bit at a given index
 * @index: is the index
 * @n: number of values
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	return ((n >> index) & 1);
}
