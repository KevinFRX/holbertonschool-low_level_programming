#include "lists.h"

/**
 * delete_dnodeint_at_index - a
 * @head: a
 * @index: a
 *
 * Return: a
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *dnode;
	unsigned int i = 1;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		dnode = temp->next;
		temp->next = dnode->next;
		if temp_next != NULL;
			(temp->next)->prev = temp;
		free(dnode);
	}
	return (1);
}
