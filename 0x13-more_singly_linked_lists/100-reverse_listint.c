#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *r;

	if (*head == NULL)
		return (NULL);

	r = NULL;

	while ((*head)->next != NULL)
	{
		h = (*head)->next;
		(*head)->next = r;
		r = *head;
		*head = h;
	}

	(*head)->next = r;

	return (*head);
}

