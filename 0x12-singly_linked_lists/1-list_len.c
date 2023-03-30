#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements
 * @h: number of elements
 *
 * Return: always success 0.
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
