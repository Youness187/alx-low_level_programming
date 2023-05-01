#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head
 * @idx: index
 * @n: Number
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *h;
	unsigned int c;

	if (head == NULL)
		return (NULL);
	h = *head;

	for (c = 1; c < idx; c++)
	{
		h = h->next;
		if (h == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	new->next = h->next;
	h->next = new;

	return (new);
}

