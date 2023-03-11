#include "main.h"

/**
 * _print_rev_recursion - Entry point
 * @s: input
 * Return: Always success 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
