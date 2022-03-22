#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list
  * @h: h
  *
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t ret = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ret++;
	}
	return (ret);
}
