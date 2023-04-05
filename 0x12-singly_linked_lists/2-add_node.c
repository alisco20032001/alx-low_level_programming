#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * add_node:i function that adds a new node 
 * at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: strings  to be duplicated
 *
 * Return: the address of the new element, 
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof( list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->len = len;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}

