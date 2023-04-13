#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_dgt - checks if a string is numbers
 * @s: string
 * Return: 1
 */
int is_dgt(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * length - length of a string
 * @s: string
 * Return: length of the string
 */
int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * bm - program that multiplies two positive numbers.
 * @leng1: int
 * @leng2: int
 * @leng: int
 * @s1: string
 * @s2: string
 * Return: result
 */

int *bm(int leng1, int leng2, int leng, char *s1, char *s2)
{
	int i, d1, d2, c;
	int *res = malloc(sizeof(int) * leng);

	if (res == NULL)
		return (NULL);

	for (i = 0; i <= leng1 + leng2; i++)
		res[i] = 0;

	for (leng1 -= 1; leng1 >= 0; leng1--)
	{
		d1 = s1[leng1] - '0';
		c = 0;
		for (leng2 = length(s2) - 1; leng2 >= 0; leng2--)
		{
			d2 = s2[leng2] - '0';
			c += res[leng1 + leng2 + 1] + (d1 * d2);
			res[leng1 + leng2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[leng1 + leng2 + 1] += c;
	}
	return (res);
}

/**
 * main - program that multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int leng1, leng2, leng, i, *res, a = 0;

	s1 = argv[1];
	s2 = argv[2];

	if (argc != 3 || !is_dgt(s1) || !is_dgt(s2))
	{
		printf("Error\n");
		exit(98);
	}

	leng1 = length(s1);
	leng2 = length(s2);
	leng = leng1 + leng2 + 1;
	res = bm(leng1, leng2, leng, s1, s2);

	for (i = 0; i < leng - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
