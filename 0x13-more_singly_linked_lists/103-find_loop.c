#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: head
 * Return: he address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr = head;
	listint_t *hold = head;

	if (head == NULL)
		return (NULL);

	while (hold != NULL && curr != NULL && curr->next != NULL)
	{
		curr = curr->next->next;
		hold = hold->next;

		if (curr == hold)
		{
			hold = head;
			while (hold != curr)
			{
				hold = hold->next;
				curr = curr->next;
			}
			return (curr);
		}
	}

	return (NULL);
}

