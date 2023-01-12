#include "lists.h"

/**
 * get_dnodeint_at_index - nth node .
 * @head: double ptr to head .
 * @index: index .
 * Return: null or index .
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int k;

	current = head;
	k = 0;
	while (current != NULL)
	{
		if (k == index)
			return (current);
		current = current->next;
		k++;
	}

	return (NULL);
}
