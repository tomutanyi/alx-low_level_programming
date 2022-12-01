#include "lists.h"

/**
 * add_nodeint_end - adds node to list .
 * @head: ptr to the head of list .
 * @n: number to be used as content
 * Return: address of added node .
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tyr, *tyr2;

	tyr = malloc(sizeof(listint_t));
	if (tyr == NULL)
	{
		return (NULL);
	}

	tyr->n = n;
	tyr->next = NULL;

	if (*head == NULL)
	{
		*head = tyr;
		return (tyr);
	}

	tyr2 = *head;
	while (tyr2->next)
	{
		tyr2 = tyr2->next;
	}

	tyr2->next = tyr;
	return (tyr);
}
