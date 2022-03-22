#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: h
  *
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t ret = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
	}

	h = h->next;
	ret++;
	}
	return (ret);
}
