#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - function that deletes the head node of a listint_t
  * linked list, and returns the head node’s data (n)
  * @head: A double pointer to head of list
  * Return: if the linked list is empty return 0
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current1, *a;

	if (head == NULL)
		return (0);
	a = current1 = *head;
	if (*head)
	{
		i = current1->n;
		*head = current1->next;
		free(a);
	}
	else
		i = 0;
	return (i);
}
