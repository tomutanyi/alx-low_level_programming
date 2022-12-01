#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node .
 * @head: ptr to head .
 * @index: index of node .
 * Return: address of the node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old = NULL;
	listint_t *arg = NULL;
	unsigned int e = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (e == index)
		{
			old = *head;
			if (e == 0)
			{
				*head = old->next;
				free(old);
				return (1);
			}
			arg->next = old->next;
			free(old);
			return (1);
		}
		else if ((e + 1) == index)
			arg = *head;
		head = &((*head)->next);
		e++;
	}
	return (-1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
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
