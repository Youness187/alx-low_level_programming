#include "lists.h"
/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: head
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
		h = h->next, count++;
	return (count);
}
