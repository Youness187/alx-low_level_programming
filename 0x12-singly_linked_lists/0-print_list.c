#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length;
	unsigned int u;

	for (length = 0; h != NULL; length++)
	{
		u = (h->str == NULL) ? 0 : h->len;
		printf((h->str == NULL) ? "[%u] %p\n" : "[%u] %s\n", u, h->str);
		h = h->next;
	}
	return (length);
}

