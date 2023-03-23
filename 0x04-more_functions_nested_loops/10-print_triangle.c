#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: the size of the triangle.
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, z;

		for (i = 1; i <= size; i++)
		{
			z = size - i;
			for (j = 0; j < z; j++)
			{
				_putchar(' ');
			}

			for (j = size - i; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}

	}
	else
	{
		_putchar('\n');
	}
}
