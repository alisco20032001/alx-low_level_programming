#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 -  function that frees a listint_t list.
  * @head:  A double pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *i, *current1;

	if (head == NULL)
		return;
	current1 = *head;
	while (current1 != NULL)
	{
		i = current1;
		current1 = current1->next;
		free(i);
	}
	*head = NULL;
}
