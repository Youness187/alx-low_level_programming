#include "lists.h"
/**
 * free_listint - function that frees a list_t list.
 * @head: head
*/

void free_listint(listint_t *head)
{
	listint_t *h = head;
	listint_t *s;

	while (h != NULL)
	{
		s = h->next;
		free(h);
		h = s;
	}
}

