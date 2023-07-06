#include "main.h"

/**
 * print_binary - Function that prints binary
 * @n: input
 *
 * Return: Always success 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	if (n & 1)
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
}
