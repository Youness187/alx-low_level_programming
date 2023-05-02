#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	long int d;

	if (head == NULL)
		exit(98);

	while (head)
	{
		d = (head) - (head->next);
		c++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (c);
}

