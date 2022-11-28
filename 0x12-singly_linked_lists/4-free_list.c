#include "lists.h"

/**
 * free_list - free linked list .
 * @head: list_t list to free .
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}

}
