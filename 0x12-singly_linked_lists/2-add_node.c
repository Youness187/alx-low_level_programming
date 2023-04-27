#include "lists.h"
#include<string.h>
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
 * length_str - function that adds a new node at the beginning of a list_t list.
 * @head: head
 * @str: string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = length_str(str);
	new->next = *head;
	*head = new;

	return (*head);
}
