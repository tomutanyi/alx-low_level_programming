#include "lists.h"

/**
 * insert_nodeint_at_index - returns node of list .
 * @head: ptr to head .
 * @idx: index of node .
 * @n: content of node .
 * Return: address of node
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int l = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	temp = *head;
	for (; l < idx - 1 && temp != NULL; l++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
