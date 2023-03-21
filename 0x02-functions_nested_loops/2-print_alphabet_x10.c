#include "main.h"
/**
 * print_alphabet_x10 - function tha prints alphabets is lower case ten times
 *
 */

void print_alphabet_x10(void)
{
int n;
for (n = 0; n < 10; n++)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}