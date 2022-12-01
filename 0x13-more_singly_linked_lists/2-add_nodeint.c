#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of list .
 * @head: ptr to the head of the list .
 * @n: int to be used as content .
 * Return: address of node .
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mpya;

	mpya = malloc(sizeof(listint_t));

	if (mpya != NULL)
	{
		mpya->n = n;
		mpya->next = *head;
	}

	else
	{
		return (NULL);
	}

	if (*head != NULL)
	{
		mpya->next = *head;

	*head = mpya;
	return (mpya);
}
