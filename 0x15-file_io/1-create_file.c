#include "main.h"
#include <stdio.h>

/**
 * create_file - Function that creates a file
 * @text_content: input
 * @filename: name of file to create
 *
 * Return: -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int me;
	int myself;
	int i;

	if (!filename)
		return (-1);
	me = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 18);

	if (me == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (myself = 0; text_content[myself]; myself++)
		;

	i = write(me, text_content, myself);

	if (i == -1)
		return (-1);
	close(me);

	return (1);
}
