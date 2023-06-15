#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: head.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t items = 0;

	while (h)
	{
		items++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (items);
}
