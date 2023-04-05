#include "lists.h"
#include <stdio.h>
/**
  * get_nodeint_at_index - function
  * that returns the nth node of a listint_t linked list.
  * @head: A pointer head of the list
  * @index: is the index of the node, starting at 0
  * Return:  if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
