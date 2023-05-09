#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * @n: number of bits
 * @m: input
 *
 * Return: Always success 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int software = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			software++;
		}
		index >>= 1;
	}
	return (software);
}
