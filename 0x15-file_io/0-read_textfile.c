#include "main.h"

/**
 * read_textfile - reads text file and prints .
 * @filename: ptr to the name of file .
 * @letters: The no. of letters .
 * Return: Failure, (0), Success, (bytes)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t k, s, g;
	char *andor;

	if (filename == NULL)
	{
		return (0);
	}

	andor = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
	{
		return (0);
	}

	k = open(filename, O_RDONLY);
	s = read(k, buffer, letters);
	g = write(STDOUT_FILENO, buffer, s);

	if (k == -1 || s == -1 || g == -1 || g != s)
	{
		free(andor);
		return (0);
	}

	free(andor);
	close(k);

	return (g);

}
