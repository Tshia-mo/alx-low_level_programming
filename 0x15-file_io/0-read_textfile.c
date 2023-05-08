#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints is
 * @filename: name of the file
 * @letters: number of letters that will be printed
 *
 * Return: 0 if file cannot open oe read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int you;
	ssize_t me, swe;
	char *buffer;

	if (!filename)
		return (0);
	you = open(filename, O_RDONLY);
	if (you == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	me = read(you, buffer, letters);
	swe = write(STDOUT_FILENO, buffer, me);

	close(you);

	free(buffer);

	return (swe);
}
