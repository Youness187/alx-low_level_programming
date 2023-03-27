#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of a string
*/
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}

/**
 * rev_string -  function that reverses a string
 * @s: string
*/

void rev_string(char *s)
{
	int i, leng = _strlen(s) - 1;
	char tmp;

	for (i = 0; i < leng; i++)
	{
		tmp = s[i];
		s[i] = s[leng];
		s[leng] = tmp;
		leng--;
	}
}
