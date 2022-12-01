
#include "lists.h"
/**
 * free_listint_safe - frees list .
 * @h: pointer to first node in list .
 * Return: no. of elements in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ref = 0;
	int tip;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		tip = *h - (*h)->next;
		if (tip > 0)
		{
			temp = (*h)->next;
			*h = temp;
			ref++;
		}
		else
		{
			*h = NULL;
			ref++;
			break;
		}
	}

	*h = NULL;

	return (ref);
}
