#include "lists.h"

/**
 *  sum_dlistint - return sum .
 * @head: double ptr to head .
 * Return: if empty, 0 .
 */

int sum_dlistint(dlistint_t *head)
{

	int kot = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		kot += i->n;
	}

	return (kot);
}
