#include "lists.h"

/**
 *free_listint2 - function wich frees a linked list .
 *@head: ptr to head of list .
 *Return: void .
 */

void free_listint2(listint_t **head)
{
	listint_t *mouse;
	listint_t **plot = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			mouse = *head;
			free(mouse);
			*head = (*head)->next;
		}

		*plot = NULL;
	}
}
