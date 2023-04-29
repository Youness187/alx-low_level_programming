#include "lists.h"
/**
 * sum_listint - that returns the sum of all the data (n) of a linked list.
 * @head: head
 * Return: the sum of all tha data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *n = head;

	while (n != NULL)
	{
		sum += n->n;
		n = n->next;
	}

	return (sum);
}

