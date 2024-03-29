#include "lists.h"
#include <stddef.h>
/**
 * listint_len - function that returns the number of elements
 * @h: head of a list
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
