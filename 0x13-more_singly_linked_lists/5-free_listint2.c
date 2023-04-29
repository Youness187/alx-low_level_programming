#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: head
*/

void free_listint2(listint_t **head)
{
	listint_t *h = *head;
	listint_t *s;

	if (head == NULL)
		return;
	while (h != NULL)
	{
		s = h->next;
		free(h);
		h = s;
	}
	*head = NULL;
}

