#include "lists.h"

/**
  * sum_listint -  returns the sum of all the data of a listint_t linked list
  * @head: head
  *
  * Return: the sum of all the data or 0
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	return (sum);
}
