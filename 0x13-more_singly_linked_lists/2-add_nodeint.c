#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node
 * @head: a pointer in the address
 * @n: integer for new node
 * Return: if it fails - NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
