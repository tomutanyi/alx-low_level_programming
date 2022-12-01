#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list .
 * @head: the first node in a list .
 * @index: Position of a the node .
 * Return: ptr to the node .
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < index; r++)
	{
		head = head->next;

		if (head == NULL)
		{
			return (NULL);
		}
	}

	return (head);
}
