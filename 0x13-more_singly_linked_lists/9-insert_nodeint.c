#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - function that inserts a new node
  * @head: a double pointer head of the list
  * @index: index of the list where the new node should be added.
  * @n: value of the inserted node
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current1, *new_node;

	current1 = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (index == 0)
	{
		new_node->next = current1;
		*head = new_node;
		return (*head);
	}
	while (index > 1)
	{
		current1 = current1->next;
		index--;
		if (!current1)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current1->next;
	current1->next = new_node;
	return (new_node);
}
