#include <stdio.h>
#include "main.h"
/**
 * print_buffer - function that prints a buffer.
 * @b: buffer
 * @size:  bytes of the buffer pointed by b
 */

void print_buffer(char *b, int size)
{
	int j, i, c, m;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (m = 0; m < size; m += 10)
	{
		j = (size - m) < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (i = 0; i < 10; i++)
		{
			printf(i < j ? "%02x" : "  ", b[m + i]);
			printf(i % 2 != 0 ? " " : "");
		}
		for (i = 0; i < j; i++)
		{
			c = b[m + i];
			c = (c < 32 || c > 132) ? '.' : c;
			printf("%c", c);
		}
		printf("\n");
	}
}
