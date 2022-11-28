#include "lists.h"

/**
 * add_node - Adds a node at the beginning of a singly linked list
 * @head: double pointer to the list_t .
 * @str: new str to add .
 * Return: the address of element, or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lat = 0;

	while (str[lat])
		lat++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = lat;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
