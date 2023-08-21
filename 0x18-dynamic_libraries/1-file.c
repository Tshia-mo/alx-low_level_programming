#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

/**
  * _memcpy - copy memory area
  * @dest:pointer to return
  * @src: source memory area
  * @n: bytes from memory area to copy
  *
  * Return: the pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int space1 = 0, space2 = 0;

	while (*(dest + space1) != '\0')
	{
		space1++;
	}

	while (space2 < n)
	{
		*(dest + space1) = *(src + space2);
		if (*(src + space2) == '\0')
			break;
		space1++;
		space2++;
	}
	return (dest);
}
