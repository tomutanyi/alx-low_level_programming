#include "lists.h"

/**
 * pop_listint - rms head of node .
 * @head: ptr to 1st node .
 * Return: head node .
*/

int pop_listint(listint_t **head)
{
	listint_t *loi;

	int kino;

	if (!(*head != NULL))
	{
		return (0);
	}

	loi = *head;

	*head = loi->next;

	kino = loi->n
;
	free(loi);

	return (kino);
}
