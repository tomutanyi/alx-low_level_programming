#include "lists.h"

/**
 * sum_listint - sum of data (n) in list .
 * @head: address of node .
 * Return: int .
 **/

int sum_listint(listint_t *head)
{
	int jumla = 0;

	while (head != NULL)
	{
		jumla += head->n;
		head = head->next;
	}
	return (jumla);
}
