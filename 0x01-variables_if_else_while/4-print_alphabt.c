#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
if (l != 'e' && l != 'q')
	putchar(l);
}
putchar('\n');

return (0);
}
