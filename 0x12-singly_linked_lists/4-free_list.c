#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: head
*/

void free_list(list_t *head)
{
	list_t *h = head;
	list_t *s;

	while (h != NULL)
	{
		s = h->next;
		free(h->str);
		free(h);
		h = s;
	}
}
