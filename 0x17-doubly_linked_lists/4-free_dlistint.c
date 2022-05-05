#include "lists.h"

/**
 * free_dlistint - a
 * @head: a
 *
 * Return: a
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
