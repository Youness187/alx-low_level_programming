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
 * _strncat - function that concatenates two strings
 * @dest: array of characters
 * @src: array of characters
 * @n: number of bytes from src
 * Return: dest the concatenate String
*/

char *_strncat(char *dest, char *src, int n)
{
	int d_leng = length(dest);
	int i = d_leng;
	int j;

	for (j = 0; i < (d_leng + n) && src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
