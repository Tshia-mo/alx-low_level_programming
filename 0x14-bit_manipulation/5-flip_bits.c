#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * @n: input
 * @m: input
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;


	while (xor)
	{
		bits++;
		xor &= xor - 1;
	}

	return (bits);
}
