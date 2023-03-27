#include "main.h"
/**
 * print_rev - function that prints a string in reverse followed by a new line.
 * @s: string
*/
void print_rev(char *s)
{
	int i, leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	for (i = leng; i > 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
