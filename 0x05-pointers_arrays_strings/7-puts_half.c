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

/**
 * puts_half - unction that prints half of a string, followed by a new line.
 * @str: string
*/

void puts_half(char *str)
{
	int n = _strlen(str);
	int i, leng;

	if (n % 2 == 1)
	{
		n = (n + 1) / 2;
		leng = (n * 2) - 1;
	}
	else
	{
		n /= 2;
		leng = n * 2;
	}

	for (i = n; i < leng; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
