#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - Entry point
 * @str: input
 * Return: Always success 0.
 */
char *_strdup(char *str)
{
	int i, end;
	char *array;

	if (str == 0)
		return (0);

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	array = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		array[i] = str[i];

	if (array == 0)
		return (0);
	return (array);
}
