#include "lists.h"

/**
 * insert_nodeint_at_index - returns node of list .
 * @head: ptr to head .
 * @idx: index of node .
 * @n: content of node .
 * Return: address of node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pri_node = NULL;
	listint_t *old_node = NULL;
	unsigned int k = 0;

	new_node = malloc(sizeof(listint_t));
	if (pri_node == NULL || idx > listint_len(*head))
	{
		free(pri_node);
		return (NULL);
	}
	pri_node->n = n;
	pri_node->next = NULL;
	while (head != NULL)
	{
		if (k == idx)
		{
			if (k == 0)
			{
				pri_node->next = *head;
				*head = pri_node;
				return (pri_node);
			}
			pri_node->next = old_node->next;
			old_node->next = pri_node;
			return (pri_node);
		}
		else if ((k + 1) == idx)
			old_node = *head;
		head = &((*head)->next);
		k++;
	}
	return (NULL);
}

/**
 * listint_len - counts nodes in list .
 * @h: head of list .
 * Return: no. elements .
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *mouse = h;
	size_t hsb = 0;

	while (mouse != NULL)
	{
		hsb += 1;
		mouse = mouse->next;
	}
	return (hsb);
}
