#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc .
 * @b: the size allocated .
 * Return: the pointer .
 */

void *malloc_checked(unsigned int b)
{
	void *free;

	free = malloc(b);

	if (free == NULL)
	{
		exit(98);
	}

	return (free);
}
