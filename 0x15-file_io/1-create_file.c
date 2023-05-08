#include "main.h"

/**
 * create_file - function that creates file
 * @text_content: content of the text
 * @filename: name of file
 *
 * Return: -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int name;
	int nletters;
	int okay;

	if (!filename)
		return (-1);

	name = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (name == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	okay = write(name, text_content, nletters);

	if (okay == -1)
		return (-1);

	close(name);

	return (1);
}
