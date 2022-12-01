#include "lists.h"

/**
 * listint_len - function returns the no. of elements .
 * @h: ptr to the first node .
 * Return: no. of elements .
*/

size_t listint_len(const listint_t *h)
{
	size_t atin = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		if (h->n != '\0')
		{
			atin++;
		}

		h = h->next;
	}

	return (atin);
}
