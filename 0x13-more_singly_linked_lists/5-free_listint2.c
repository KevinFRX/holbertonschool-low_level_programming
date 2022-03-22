#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head)
	{
		t = *head;
		*head = t->next;
		free(t);
	}
}
