#include "lists.h"

/**
 * get_dnodeint_at_index - a
 * @head: a
 * @index: a
 *
 * Return: a
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
