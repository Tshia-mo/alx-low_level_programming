#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - entry point
 * @size: size of array
 * @action: a pointer to the function you need to use
 * @array: input
 * Return: Always success 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
