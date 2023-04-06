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
 * _strcat - function that concatenates two strings
 * @dest: array of characters
 * @src: array of characters
 * Return: dest the concatenate String
*/

char *_strcat(char *dest, char *src)
{
	int d_leng = length(dest);
	int s_leng = length(src);
	int i = d_leng;
	int j;

	for (j = 0; i < (d_leng + s_leng); i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[(d_leng + s_leng)] = '\0';
	return (dest);
}
