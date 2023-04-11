#include "main.h"
#include <stdlib.h>
/**
 * length - method that return length of string
 * @d: String
 * Return: i length of string
*/

int length(char *d)
{
	int i;

	for (i = 0; *d != '\0'; d++)
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	char *cp;
	int i, l = length(str);

	cp = malloc(l + 1);
	if (cp == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		cp[i] = str[i];
	cp[l + 1] = '\0';
	return (cp);
}

