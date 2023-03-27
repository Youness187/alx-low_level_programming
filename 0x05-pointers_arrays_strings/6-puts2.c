#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
*/

void puts2(char *str)
{
	do {
		_putchar(*str);
		str += 2;
	} while (*str != '\0');
	_putchar('\n');
}
