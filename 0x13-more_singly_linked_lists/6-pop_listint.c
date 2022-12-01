#include "lists.h"

/**
 * pop_listint - rms head of node .
 * @head: ptr to 1st node .
 * Return: head node .
*/

int pop_listint(listint_t **head)
{
	int rex;

	listint_t *temp, *fox;

	if (*head == NULL)
		return (0);

	temp = *head;
	fox = temp->fox;
	rex = temp->n;

	free(temp);

	*head = fox;

	return (rex);
}
