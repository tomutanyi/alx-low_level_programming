#include "lists.h"

/**
 * reverse_listint - reverses list .
 * @head: ptr to node .
 * Return: ptr to 1st node .
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *sec_node = NULL;
	listint_t *last_node = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		sec_node = (*head)->next;
		(*head)->next = last_node;
		last_node = *head;
		*head = sec_node;
	}
	*head = last_node;
	return (*head);
}
