#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int me);

/**
 * main - Entry point
 * @argc: input
 * @argv: input
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, opn, rd, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	opn = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(opn, buffer, rd);
		if (opn == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		opn = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(rd);

	return (0);
}

/**
 * close_file - Closes file
 * @me: input
 */
void close_file(int me)
{
	int cl;

	cl = close(me);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close me %d\n", me);
		exit(100);
	}
}

/**
 * create_buffer - create a buffer
 * @file: filename
 *
 * Return: always success 0.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
