#include <unisd.h>
#include <main.h>
/**
 * _putchar . write the character c to stoud
 * @c: The character to print
 *
 * return: On success 1.
 * On error. -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
