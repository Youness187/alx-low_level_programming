#include "main.h"
/**
 * is_in - if s == to a[i]
 * @s: char
 * @a: array
 * Return: 1 if true and 0 if false
 */
int is_in(char s, char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (s == a[i])
			return (1);
	}
	return (0);
}
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: prefix to be measured.
 * Return: The number of bytes in s inital segment,which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int b = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (is_in(s[i], accept) == 1)
			b++;
		else
			return (b);
	}
	return (b);
}

