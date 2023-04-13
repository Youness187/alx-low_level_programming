#include "main.h"
#include <stdlib.h>
/**
 * leng - length of string
 * @s: string
 * Return: length of string
 */
int leng(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++, i++)
		;
	return (i);
}

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: bytes to include of s2
 * Return: pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1l = leng(s1 = (s1 == NULL) ? "" : s1);
	int s2l = leng(s2 = (s2 == NULL) ? "" : s2);
	unsigned int ln = ((n >= (unsigned int)s2l) ? (unsigned int)s2l : n);
	int i, j = 0;
	char *string = malloc((s1l + ln + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; (unsigned int)i < (s1l + ln); i++)
		string[i] = (i < s1l) ? s1[i] : s2[j++];

	string[i] = '\0';
	return (string);
}

