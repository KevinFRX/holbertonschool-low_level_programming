#include "lists.h"

/**
 * insert_dnodeint_at_index - a
 * @h: a
 * @idx: a
 * @n: a
 *
 * Return: a
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		new_node->prev = NULL;
		*h = new_node;
		return (*h);
	}
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	(temp->next)->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
