#include <math.h>
#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list,
 *             of integers using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), i;
	listint_t *current = list;
	listint_t *prev = NULL, *temp;

	if (list == NULL)
		return (NULL);

	while (current->next && current->n < value)
	{
		prev = current;

		for (i = 0; current->next && i < jump; i++)
			current = current->next;
		if (current)
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	if (current)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
					prev->index, current->index);

		for (temp = prev; temp && temp->index <= current->index; temp = temp->next)
		{
			printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
			if (temp->n == value)
				return (temp);
		}
	}

	return (NULL);
}
