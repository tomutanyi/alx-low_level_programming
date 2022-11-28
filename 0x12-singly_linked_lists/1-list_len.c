#include "lists.h"

/**
 * list_len - function to calculate the number of elements .
 * @h: ptr to list .
 * Return: Int .
 **/

size_t list_len(const list_t *h)
{
	const list_t *tem;
	unsigned int count = 0;

	tem = h;

	while (tem)
	{
		count++;
		tem = tem->next;
	}
	return (count);
}
