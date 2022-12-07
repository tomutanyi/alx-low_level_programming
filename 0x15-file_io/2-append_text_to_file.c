#include"main.h"

/**
 *append_text_to_file - function that appends text .
 *@filename: ptr to name .
 *@text_content: str to add .
 *Return: fail, (-1), otherwise (1) .
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int y, l, ref = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (ref = 0; text_content[ref];)
		{
			ref++;
		}
	}

	y = open(filename, O_WRONLY | O_APPEND);
	l = write(y, text_content, ref);

	if (y == -1 || l == -1)
	{
		return (-1);
	}

	close(y);

	return (1);
}
