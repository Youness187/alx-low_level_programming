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
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
*/

void puts2(char *str)
{
	int i = 0;

	do {
		_putchar(str[i]);
		i += 2;
	} while (str[i] != '\0' && i < _strlen(str));
	_putchar('\n');
}
