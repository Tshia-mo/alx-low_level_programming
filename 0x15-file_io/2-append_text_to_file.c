#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends a text at the end of the file
 * @filename: name of file
 * @text_content: content of thr file
 *
 * Return: always success -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (!filename)
		return (-1);
	file = fopen(filename, "t");

	if (!file)
		return (-1);
	if (text_content)
	{
		fputs(text_content, file);
	}
	fclose(file);

	return (1);
}
