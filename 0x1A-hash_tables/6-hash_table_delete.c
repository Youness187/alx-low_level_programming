#include "hash_tables.h"
/**
 * free_hash - function that deletes a hash table.
 * @h: the hash table
 */

void free_hash(hash_node_t *h)
{
	if (h->next)
		free_hash(h->next);
	free(h->key);
	free(h->value);
	free(h);
}

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head)
		{
			free_hash(head);
		}
	}
	free(ht->array);
	free(ht);
}

