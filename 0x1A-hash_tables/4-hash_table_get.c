#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: the key
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *aux;

	if (ht == NULL || key == NULL || *key == '\0' || ht->array == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[idx];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
