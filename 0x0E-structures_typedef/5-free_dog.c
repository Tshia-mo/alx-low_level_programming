#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dogs
 * @d: input
 * Return: Always success 0.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
