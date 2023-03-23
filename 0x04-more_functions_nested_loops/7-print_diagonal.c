#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int j, c = 0;

		while (n > 0)
		{
			j = c;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
			c++;
			n--;
		}
	}
	else
	{
		_putchar('\\');
		_putchar('\n');
	}
}
