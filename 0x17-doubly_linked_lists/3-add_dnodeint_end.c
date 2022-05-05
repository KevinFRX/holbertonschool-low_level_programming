#include "lists.h"

/**
 * add_dnodeint_end - a
 * @head: a
 * @n: a
 *
 * Return: a
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *t;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head)
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = node;
		node->prev = t;
		return (t);
	}
	else
	{
		node->prev = NULL;
		*head = node;
		return (*head);
	}
}
