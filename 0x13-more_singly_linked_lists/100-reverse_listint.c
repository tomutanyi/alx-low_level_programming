#include "lists.h"

/**
 * reverse_listint - reverses list .
 * @head: ptr to node .
 * Return: ptr to 1st node .
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}

	*head = last;

	return (*head);
}
