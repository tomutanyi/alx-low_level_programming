#include "lists.h"

/**
 * print_listint_safe - prints a list .
 * @head: list to print .
 * Return: nodes in list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t fir = 0;
	long int sim;

	while (head)
	{
		sim = head - head->next;
		fir++;

		printf("[%p] %d\n", (void *)head, head->n);

		if (sim > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (fir);
}
