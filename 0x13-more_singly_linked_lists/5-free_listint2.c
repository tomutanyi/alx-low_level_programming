#include "lists.h"

/**
 *free_listint2 - function wich frees a linked list .
 *@head: ptr to head of list .
 *Return: void .
 */

void free_listint2(listint_t **head)
{
	listint_t *volt, *plot;

	if (head != NULL)
	{
		volt = *head;

		while ((plot = volt) != NULL)
		{
			volt = volt->next;
			free(plot);
		}

		*head = NULL;
	}
}
