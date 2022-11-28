#include "lists.h"

/**
 * add_node_end - adds a node to a list .
 * @head: ptr to head .
 * @str: str to be used .
 * Return: address .
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cursor = *head;

	new_node = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new;
	}
	else
		*head = new;

	return (new);
}

/**
 * _strlen - counts len .
 * @str: str in queston .
 * Return: length .
 */

int _strlen(const char *str)
{
	int v = 0;

	while (str[v] != '\0')
		v++;
	return (v);
}
