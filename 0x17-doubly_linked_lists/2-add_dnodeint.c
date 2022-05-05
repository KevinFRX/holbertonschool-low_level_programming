#include "lists.h"

/**
 * add_dnodeint - a
 * @head: a
 * @n: a
 *
 * Return: a
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	if (*head)
	{
		(*head)->prev = node;
		node->next = *head;
	}
	else
		node->next = NULL;
	*head = node;
	return (node);
}
