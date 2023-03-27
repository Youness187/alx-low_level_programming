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
