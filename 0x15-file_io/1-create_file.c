#include "main.h"

/**
 * create_file - Function wich reates a file.
 * @filename: A ptr to name of the file .
 * @text_content: ptr to str .
 * Return: Failure, (-1) or (1) .
 */

int create_file(const char *filename, char *text_content)
{
	int i, v, ref = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ref = 0; text_content[ref];)
			ref++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	v = write(i, text_content, ref);

	if (i == -1 || v == -1)
		return (-1);

	close(i);

	return (1);
}
