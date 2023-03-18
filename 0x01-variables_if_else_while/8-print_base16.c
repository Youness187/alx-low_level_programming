
#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (l = 'a'; l < 'g'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
