#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning .
 * @head: double ptr to the head .
 * @n: data .
 * Return: address or null .
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	s_node = malloc(sizeof(dlistint_t));
	if (s_node == NULL)
		return (NULL);

	s_node->n = n;
	s_node->next = *head;
	s_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = s_node;
	*head = s_node;
	return (s_node);
}
