#include "main.h"
/**
 * _factorial - entry point
 * @n: input
 *
 * Return: integer value
 */
int factorial(int n);
{
	if (n < 0)
	return (-1);

	if (n <= 1)
	return (1);

	return (n * factorial(n - 1));
}
