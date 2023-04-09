#include "main.h"

/**
 * print_binary - Function that prints a binary representation of a number
 * @n: representation of a number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
