#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: head
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *h = (*head);
	int n;

	if (*head == NULL)
		return (0);

	n = h->n;
	*head = h->next;
	free(h);
	return (n);
}

