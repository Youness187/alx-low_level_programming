#include "main.h"
/**
 * _strcmp - function compares the two strings
 * @s1: string
 * @s2: string
 * Return: an integer indicating the result of the comparison, as follows
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
