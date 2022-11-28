#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints elements list .
 * @h: Thelist .
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t spa = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		spa++;

		h = h->next;
	}

	return (spa);
}
