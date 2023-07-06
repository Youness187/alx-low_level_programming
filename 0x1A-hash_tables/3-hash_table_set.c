#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *head;
	unsigned long int index = 0;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	head = ht->array[index];
	new->key = strdup(key);
	new->value = strdup(value);
	if (head != NULL)
	{
		new->next = head;
		ht->array[index] = new;
		return (1);
	}
	new->next = NULL;
	ht->array[index] = new;
	return (1);
}

