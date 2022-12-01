#include "lists.h"

/**
 * add_nodeint_end - adds node to list .
 * @head: ptr to the head of list .
 * @n: number to be used as content
 * Return: address of added node .
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nd;
	listint_t *mouse = *head;

	nd = malloc(sizeof(listint_t));

	if (nd != NULL)
	{
		nd->n = n;
		nd->next = NULL;
	}

	else
	{
		return (NULL);
	}

	if (mouse != NULL)
	{
		while (mouse->next != NULL)
		{
			mouse = mouse->next;
		}

		mouse->next = nd;
	}

	else
	{
		*head = nd;
	}

	return (nd);
}
