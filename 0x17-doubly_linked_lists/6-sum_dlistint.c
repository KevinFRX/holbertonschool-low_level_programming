#include "lists.h"

/**
 * sum_dlistint - a
 * @head: a
 *
 * Return: a
 */

int sum_dlistint(dlistint_t *head)
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
