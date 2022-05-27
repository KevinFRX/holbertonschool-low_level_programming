#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	while (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			return (1);
		}
		ht->array[idx] = ht->array[idx]->next;
	}
	add_node(&ht->array[idx], key, value);
	if (&ht->array[idx] == NULL)
		return (0);
	return (1);
}
/**
 * add_node - adds a new node at the beginning of a list
 * @head: head
 * @key: key
 * @value: value
 *
 * Return: the address of the new list or NULL if it failed
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	char *keyd = strdup(key);
	char *valued = strdup(value);
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = keyd;
	new_node->value = valued;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
