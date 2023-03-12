#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
