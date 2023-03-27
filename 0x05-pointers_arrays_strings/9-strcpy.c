#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length of a string
*/
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the variable
 * @src: the string
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int leng = _strlen(src);
	int i;

	for (i = 0; i < leng; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
