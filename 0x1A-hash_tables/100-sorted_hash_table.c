#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashTable;
	unsigned long int n = 0;

	hashTable = malloc(sizeof(shash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(shash_node_t *) * size);
	if (hashTable->array == NULL)
		return (NULL);

	for (; n < size; n++)
		hashTable->array[n] = NULL;

	hashTable->shead = NULL;
	hashTable->stail = NULL;

	return (hashTable);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	unsigned long int index;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - that retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key
 * Return: value associated with the element or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	head = ht->shead;
	while (head != NULL && strcmp(head->key, key) != 0)
		head = head->snext;

	return ((head == NULL) ? NULL : head->value);
}

/**
 * shash_table_print - function that prints a hash table.
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head;

	if (ht == NULL)
		return;

	head = ht->shead;
	printf("{");
	while (head != NULL)
	{
		printf("'%s': '%s'", head->key, head->value);
		head = head->snext;
		if (head != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht:the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *head;

	if (ht == NULL)
		return;

	head = ht->stail;
	printf("{");
	while (head != NULL)
	{
		printf("'%s': '%s'", head->key, head->value);
		head = head->sprev;
		if (head != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
