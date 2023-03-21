#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: int type number
 */

void print_times_table(int n)
{
if (!(n > 15 || n < 0))
{
int i, j, l;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
l = i * j;
if (l >= 100)
{
_putchar(l / 100 + '0');
_putchar((l / 10 % 10) + '0');
_putchar(l % 10 + '0');
}
else if (l >= 10)
{
_putchar(' ');
_putchar(l / 10 + '0');
_putchar(l % 10 + '0');
}
else if (j > 0)
{
_putchar(' ');
_putchar(' ');
_putchar(l + '0');
}
else
{
_putchar(l + '0');
}
if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
