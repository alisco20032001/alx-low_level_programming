#include "lists.h"
#include <stdio.h>

/**
  * sum_listint - function that returns
  * the sum of all the data (n) of a listint_t linked list.
  * @head: A pointer to the head of the list
  * Return: if the list is empty, return 0
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head->next = head;
	}
	return (sum);
}
