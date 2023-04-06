#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: buffer array
 * @b: char
 * @n: bytes of memory
 * Return: ointer to the memory area (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
