#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked lists .
 * @str: string - str .
 * @len: len of str .
 * @next: points to the node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
void free_list(list_t *head);
int _strlen(const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);

#endif
