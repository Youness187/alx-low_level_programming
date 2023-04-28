#include "lists.h"
/**
 * add_nodeint_end - that adds a new node at the end of a listint_t list.
 * @head: head
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old = *head;

	while (old != NULL && old->next != NULL)
		old = old->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (old == NULL)
	{
		*head = new;
		return (new);
	}
	else
		old->next = new;

	return (new);
}

