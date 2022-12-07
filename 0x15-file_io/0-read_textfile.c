#include "main.h"

/**
 * read_textfile - reads text file and prints .
 * @filename: ptr to the name of file .
 * @letters: The no. of letters .
 * Return: Failure, (0), Success, (bytes)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t k, j, s;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer ==  NULL)
	{
		return (0);
	}

	k = open(filename, O_RDONLY);
	j = read(k, buffer, letters);
	s = write(STDOUT_FILENO, buffer, j);

	if (k == -1 || j == -1 || s == -1 || s != j)
	{
		free(buffer);

		return (0);
	}

	free(buffer);
	close(k);

	return (s);

}
