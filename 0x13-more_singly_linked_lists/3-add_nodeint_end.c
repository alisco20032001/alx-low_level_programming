#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - function that adds a new node at
  * the end of a listint_t list
  * @head: a pointer to the head
  * @n: int to be use to add list
  * Return: pointer to current1 position
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current1;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current1 = *head;
	while (current1->next != NULL)
		current1 = current1->next;
	current1->next = new_node;
	return (*head);
}
