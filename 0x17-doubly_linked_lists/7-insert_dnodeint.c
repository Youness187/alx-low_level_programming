#include "lists.h"
/**
 * insert_dnodeint_at_index - that inserts a new node at a given position.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (head != NULL && i < idx - 1)
	{
		head = head->next;
		i++;
		if (!head)
			return (NULL);
	}
	if (head->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = head->next;
	new->prev = head;
	head->next = new;
	new->next->prev = new;
	return (new);
}
