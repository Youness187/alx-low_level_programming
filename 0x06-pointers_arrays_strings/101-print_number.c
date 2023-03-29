#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: number
*/
void print_number(int n)
{
	int Number;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	Number = n;
	if (Number / 10 != 0)
	{
		print_number(Number / 10);
	}
	_putchar(Number % 10 + '0');
}
