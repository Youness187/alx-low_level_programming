#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c;
	long int i = 1, j = 2;
	long int n;

	printf("%lu, ", i);
	for (c = 2; c <= 50; c++)
	{
		if (c == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		n = j;
		j += i;
		i = n;
	}

	return (0);
}
