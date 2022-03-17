#include "lists.h"

/**
  * list_len -  returns the number of elements in a linked list_t list
  * @h: h
  *
  * Return:  the number of elements in a linked list_t list
  */

size_t list_len(const list_t *h)
{
	size_t ret = 0;

	while (h)
	{
		h = h->next;
		ret++;
	}
	return (ret);
}
