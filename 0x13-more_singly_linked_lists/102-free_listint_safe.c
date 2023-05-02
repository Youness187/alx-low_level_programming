#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: head
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h, *hold;
	size_t c = 0;

	while (curr != NULL)
	{
		c++;
		hold = curr;
		curr = curr->next;

		if (hold < curr)
			break;
		free(hold);
	}
	*h = NULL;

	return (c);
}

