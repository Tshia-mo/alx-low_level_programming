#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Function that reads a text file and prints is
 * @filename: name of the file
 * @letters: number of letters that will be printed
 *
 * Return: 0 if file cannot open oe read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t me;
	ssize_t good;
	ssize_t real;

	me = open(filename, O_RDONLY);
	if (me == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	real = read(me, buf, letters);
	good = write(STDOUT_FILENO, buf, real);

	free(buf);
	close(me);
	return (good);
}
