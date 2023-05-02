#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *hold;
	size_t c = 0;

	curr = head;
	if (curr == NULL)
		exit(98);

	while (curr != NULL)
	{
		hold = curr;
		curr = curr->next;
		c++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
	}

	return (c);
}

