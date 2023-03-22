#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: name of function
 * @f: function
 * Return: always success 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
