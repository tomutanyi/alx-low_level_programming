#include "lists.h"

/**
 * dlistint_len - returns the number of elements .
 * @h: ptr to head of list .
 * Return: no. of nodes .
 */

size_t dlistint_len(const dlistint_t *h)
{
	int arm = 0;

	if (h == NULL)
		return (arm);

	while (h != NULL)
	{
		arm++;
		h = h->next;
	}

	return (arm);
}
