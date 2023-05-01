#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes node at index index of a listint_t list.
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h;
	listint_t *d;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	h = *head;

	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		h = h->next;
		if (h == NULL)
			return (-1);
	}
	d = h->next;
	h->next = d->next;
	free(d);
	return (1);
}

