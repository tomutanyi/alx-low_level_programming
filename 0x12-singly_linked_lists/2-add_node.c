#include "lists.h"

/**
 * add_node - adds node at beginning of a linked list
 * @head: double ptr to the list .
 * @str: new str to add in the node .
 * Return: address the element, or NULL if failure .
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int ref = 0;

	while (str[ref])
		ref++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->ref = ref;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
