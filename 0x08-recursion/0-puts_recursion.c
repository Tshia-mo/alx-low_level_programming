#include "main.h"
/**
 * _puts_recursion - entry point
 *
 * @s: prints a address of a string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
