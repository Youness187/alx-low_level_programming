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
 * rev_str - reverses a string
 * @s: string
 * Return: reverses a string
*/

char *rev_str(char *s)
{
	int tmp;
	int i, l = length(s) - 1;

	for (i = 0; i < l; i++, l--)
	{
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
	}
	return (s);
}
/**
 * infinite_add - function that adds two numbers.
 * @n1: string of numbers
 * @n2: string of numbers
 * @r: the buffer that the function will use to store the result
 * @size_r:  the buffer size
 * Return: adds two numbers
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = length(n1) - 1;
	int l2 = length(n2) - 1;
	int i, a, b, c = 0;

	size_r -= 1;

	for (i = 0; l1 >= 0 || l2 >= 0 || c != 0; l1--, l2--, i++)
	{
		if (i >= size_r)
		{
			return (0);
		}
		b = l2 >= 0 ? n2[l2] - '0' : 0;
		a = l1 >= 0 ? n1[l1] - '0' : 0;

		a += b + c;
		c = a / 10;
		a %= 10;
		r[i] = a + '0';
	}
	r[i] = '\0';
	return (rev_str(r));
}
