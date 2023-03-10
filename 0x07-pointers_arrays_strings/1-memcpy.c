#include "main.h"

/**
 * _memcpy - entry point
 * @n: byte
 * @dest: memory area
 * @src: memory area
 * Return: Always success 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
