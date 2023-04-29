#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: head
 * @index: index
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *n = head;

	for (i = 0; i < index; i++)
	{
		if (n != NULL)
			n = n->next;
		else
			return (NULL);
	}

	return (n);
}

