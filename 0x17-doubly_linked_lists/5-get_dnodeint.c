#include "lists.h"
/**
  * get_dnodeint_at_index - get a nodes in list.
  * @head: the head of the list.
  * @index: the node index.
  * Return: the nth node of a dlistint_t linked list.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
