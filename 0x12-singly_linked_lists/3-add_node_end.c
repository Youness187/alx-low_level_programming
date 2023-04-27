#include "lists.h"
/**
 * length_str - conts length of a string
 * @str: string
 * Return: length
*/
unsigned int length_str(const char *str)
{
	int l;

	for (l = 0; *str != '\0'; l++, str++)
		;
	return (l);
}
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head
 * @str: String
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old = *head;

	while (old != NULL && old->next != NULL)
		old = old->next;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = length_str(str);
	new->next = NULL;

	if (old == NULL)
	{
		*head = new;
		return (new);
	}
	else
		old->next = new;

	return (new);
}

