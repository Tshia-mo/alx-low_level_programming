#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Function that coverts binary number to unsigned int
 * @b: pointing at a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	int len = strlen(b);
	unsigned int result = 0;

	unsigned int base = 1;

	for (int i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			result += base;
		}

		base *= 2;
	}

	return (0);
}
