#include "main.h"
/**
 * length - length of string
 * @s: string
 * Return: length of string
 */

int length(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != '0' && s[i] != '1')
			return (0);
	}

	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, power = 1;
	int len;

	if (b == NULL)
		return (0);

	len = length(b);

	for (; len >= 0; power *= 2)
	{
		len--;
		if (b[len] == '1')
			total += power;
	}

	return (total);
}

