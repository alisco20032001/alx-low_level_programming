#include "lists.h"
#include <stdio.h>

/**
  * reverse_listint -  function that reverses a listint_t linked list.
  * @head: describe arg
  * Return:  a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *ahead, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = ahead;
	}

	(*head)->next = back;

	return (*head);
}
