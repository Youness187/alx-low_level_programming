#include "main.h"
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
 * _strncpy - function that copies a string.
 * @dest: array of characters
 * @src: array of characters
 * @n: number of bytes from src
 * Return: dest the concatenate String
*/

char *_strncpy(char *dest, char *src, int n)
{
	int l = length(src) >= n ? n : length(src);
	int i;

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}

	if (length(src) <= n)
	{
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
