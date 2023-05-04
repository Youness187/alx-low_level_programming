#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int s, c = 0;
	unsigned long int curr = n;

	for (s = 0; (curr >>= 1) > 0; s++)
		;

	for (; s >= 0; s--)
	{
		curr = n >> s;

		if (curr & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c > 0)
			_putchar('0');
	}
	if (c == 0)
		_putchar('0');
}

