#include <math.h>
#include "search_algos.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list;
	skiplist_t *prev = NULL;

	if (list == NULL)
		return (NULL);

	while (current)
	{
		if (current->n == value)
			return (current);

		prev = current;
		current = current->express;

		if (current)
		{
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
			if (current->n >= value)
				break;
		}
	}
	if (current)
		printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	else
	{
		current = prev;
		while (current->next)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	}
	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
