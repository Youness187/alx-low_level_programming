#include "main.h"
#include <stdlib.h>
/**
 * length - method that return length of string
 * @s: String
 * Return: i length of string
*/
int length(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++, i++)
	;
	return (i);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int ls1 = length((s1 != NULL) ? s1 : "");
	int ls2 = length((s2 != NULL) ? s2 : "");
	char *str = malloc(ls1 + ls2 + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ls1; i++)
		str[i] = s1[i];
	for (j = 0; j < ls2; j++, i++)
		str[i] = s2[j];

	str[i] = '\0';
	return (str);
}

