#include "lists.h"
/**
 * sum_dlistint - that returns the sum of all the data (n)
 * @head: pointer to the list.
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
