#include "main.h"

/**
* _calloc -  a function that allocates memory for
* an array, using malloc .
* @nmemb: the elements
* @size: memory size to be allocated .
*
*Return: the ptr .
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ram;
	unsigned int loy;
	char *kino;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ram = malloc(size * nmemb);

	if (ram == NULL)
	{
		return (NULL);
	}

	kino = ram;

	for (loy = 0; loy < (size * nmemb); loy++)
	{
		kino[loy] = '\0';
	}

	return (ram);
}
