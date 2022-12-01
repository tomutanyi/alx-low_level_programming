#include "lists.h"

/**
 * print_listint - function that prints all elements of a list .
 * @h: ptr to first node .
 * Return: no. of nodes .
*/

size_t print_listint(const listint_t *h)
{
	size_t node_counter = 1;


	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		node_counter++;
	}

	printf("%d\n", h->n);

	return (node_counter);
}
