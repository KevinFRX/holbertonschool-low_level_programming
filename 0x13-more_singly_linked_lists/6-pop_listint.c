#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: head
  *
  * Return: the head node's data (n)
  */

int pop_listint(listint_t **head)
{
	int ret = 0;
	listint_t *new_list;

	if (*head)
	{
		new_list = (*head)->next;
		ret = (*head)->n;
		free(*head);
		*head = new_list;
	}
	return (ret);
}
