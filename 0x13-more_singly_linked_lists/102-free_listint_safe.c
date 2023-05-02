#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: head
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *hold;
	size_t c = 0;
	long int d;

	while (*h != NULL)
	{
		d = (*h) - ((*h)->next);
		c++;

		if (d > 0)
		{
			hold = (*h)->next;
			free(*h);
			*h = hold;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (c);
}

