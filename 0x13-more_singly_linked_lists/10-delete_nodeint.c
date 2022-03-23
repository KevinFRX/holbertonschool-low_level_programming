#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index of a linked list
  * @head: head
  * @index: index
  *
  * Return: 1 or -1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dnode;
	unsigned int i = 1;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				return (-1);
			}
			i++;
		}
		dnode = temp;
		dnode = dnode->next;
		temp->next = dnode->next;
		free(dnode);
	}
	return (1);
}
