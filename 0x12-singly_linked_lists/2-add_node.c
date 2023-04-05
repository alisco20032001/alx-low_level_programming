#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node 
 * at the beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: strings  to be duplicated
 *
 * Return: the address of the new element, 
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new->str = dup;
	new->i = i;
	new->next = *head;

	*head = new;

	return (new);
}

