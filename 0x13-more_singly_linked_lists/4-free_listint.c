#include "lists.h"

/**
 * free_listint - function frees a linked list .
 * @head: the head of afformentioned list .
 * Return: nothing .
 */

void free_listint(listint_t *head)
{
	listint_t *dent;

	while (head != NULL)
	{
		dent = head;
		head = head->next;
		free(dent);
	}
}
