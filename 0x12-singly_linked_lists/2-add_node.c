#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: head
  * @str: str
  *
  * Return: the address of the new list or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	char *strd = strdup(str);
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strd;
	new_node->next = *head;
	*head = new_node;
	new_node->len = _strlen(str);
	return (*head);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length
 */

int _strlen(const char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
