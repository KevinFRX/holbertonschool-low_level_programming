#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: head
  * @n: n
  *
  * Return: the address of the new list or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *t;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}
	else
	{
		t = *head;
		while (t->next)
			t = t->next;
		t->next = new_list;
		return (t);
	}
	return (NULL);
}

