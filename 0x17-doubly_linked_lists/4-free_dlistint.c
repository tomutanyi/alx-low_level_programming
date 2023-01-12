#include "lists.h"

/**
 * free_dlistint - frees listn .
 * @head: ptr to head .
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}
