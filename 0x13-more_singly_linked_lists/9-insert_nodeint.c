#include "lists.h"
/**
 * insert_nodeint_at_index - insert node .
 * @head: 1st node address .
 * @idx: position of node .
 * @n: data of node .
 * Return: address of node .
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *shan, *temp;
	unsigned int p = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (; p < idx - 1 && temp != NULL; p++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	shan = malloc(sizeof(listint_t));
	if (shan == NULL)
		return (NULL);
	shan->n = n;
	if (idx == 0)
		shan->next = *head;
		*head = shan;
		return (shan);
	shan->next = temp->next;
	temp->next = shan;
	return (shan);
}
