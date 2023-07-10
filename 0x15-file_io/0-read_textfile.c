#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that raeds textfiles and prints it
 * @filename: name of the file
 * @letters: letter number
 * Return: 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t me;
	ssize_t wrt;
	ssize_t rd;

	me = open(filename, O_RDONLY);
	if (me == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(me, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(me);
	return (wrt);
}
