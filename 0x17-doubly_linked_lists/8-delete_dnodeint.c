#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (h != NULL && i < index)
	{
		h = h->next;
		i++;
		if (h == NULL)
			return (-1);
	}
	if (h == *head)
	{
		*head = h->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		h->prev->next = h->next;
		if (h->next != NULL)
			h->next->prev = h->prev;
	}
	free(h);
	return (1);
}
