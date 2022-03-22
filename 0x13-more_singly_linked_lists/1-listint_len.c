#include "lists.h"

/**
  * listnt_len -  returns the number of elements in a linked listint_t list
  * @h: h
  *
  * Return:  the number of elements in a linked listint_t list
  */

size_t listint_len(const listint_t *h)
{
	size_t ret = 0;

	while (h)
	{
		h = h->next;
		ret++;
	}
	return (ret);
}
