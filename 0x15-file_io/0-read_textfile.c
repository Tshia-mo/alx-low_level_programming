#include "main.h"
#include <stdio.h>

/**
 * read_textfile - entry point
 * @filename: input
 * @letters: input
 *
 * Return: always success 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int okay;
	ssize_t hey, hi;
	char *buf;

	if (!filename)
		return (0);
	okay = open(filename, O_RDONLY);
	if (okay == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	hey = read(okay, buf, letters);
	hi = write(STDOUT_FILENO, buf, hey);

	close(okay);

	free(buf);

	return (hi);
}
