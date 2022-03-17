#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: head
  *
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
