#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: buffer array to copy into
 * @src: array to copy from
 * @n: number of elements to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
