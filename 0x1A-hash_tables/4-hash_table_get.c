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
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	while (strcmp(ht->array[idx]->key, key) != 0)
		ht->array[idx] = ht->array[idx]->next;
	return (ht->array[idx]->value);
}
