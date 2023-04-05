#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - function that deletes the node.
  * @head: a double pointer head of the list
  * @index: index of the node to delete
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current1, *sub;

	if (!head || !*head)
		return (-1);
	current1 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current1);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current1 = current1->next;
		if (current1 == NULL)
			return (-1);
	}
	sub = current1->next;
	current1->next = sub->next;
	free(sub);
	return (1);
}
