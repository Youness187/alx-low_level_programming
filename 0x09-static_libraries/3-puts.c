#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
