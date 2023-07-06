#include "hash_tables.h"
/**
 * hash_table_get - that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key
 * Return: value associated with the element or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head == NULL)
		return (NULL);

	while (head->next && head->key != key)
		head = head->next;

	return (head->value);
}

