#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - entry point
 * @size: input
 * @c: input
 * Return: success 0.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	a = malloc(sizeof(char) * size);

	if (a == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(a + i) = c;
	}

	return (a);
}
