#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: Success 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
