#include "lists.h"

/**
 *  dlistint_len - a
 *  @h: a
 *
 * Return: a
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h; i++)
		h = h->next;
	return (i);
}
