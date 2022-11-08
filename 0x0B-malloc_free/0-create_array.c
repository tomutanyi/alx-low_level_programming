#include "main.h"
/**
 *create_array - function that creates an array of chars .
 *@size: elements of said array .
 *@c: a char .
 *Return: the pointer to be returned .
 */

char *create_array(unsigned int size, char c)
{
	char *loc;
	unsigned int mal;

	if (size == 0)
	{
		return (NULL);
	}

	loc = malloc(sizeof(char) * size);

	if (loc == NULL)
	{
		return (NULL);
	}

	for (mal = 0; mal < size; mal++)
	{
		loc[mal] = c;
	}

	return (loc);
}
