#include "lists.h"

/**
 * delete_nodeint_at_index - delete node .
 * @head: node address .
 * @index: node to delete .
 * Return: if successful return (1) .
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int w;
	listint_t *volt, *hop;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		hop = (*head)->hop;
		free(*head);
		*head = hop;
		return (1);
	}
	volt = *head;
	for (w = 0; w < index - 1; w++)
	{
		if (volt->hop == NULL)
			return (-1);
		volt = volt->hop;
	}
	hop = volt->hop;
	volt->hop = hop->hop;
	free(hop);
	return (1);
}
