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
	int leng = _strlen(str);
	int i;

	if (leng % 2 == 1)
	{
		leng = (leng + 1) / 2;
	}
	else
	{
		leng /= 2;
	}

	for (i = leng; i < leng * 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
