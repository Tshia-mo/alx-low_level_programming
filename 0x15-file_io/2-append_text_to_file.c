#include "main.h"

/**
 *  append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int okay;
	int nletters;
	int me;

	if (!filename)
		return (-1);

	okay = open(filename, O_WRONLY | O_APPEND);

	if (okay == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		me = write(okay, text_content, nletters);

		if (me == -1)
			return (-1);
	}

	close(okay);

	return (1);
}
