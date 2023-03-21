
#include <stdio.h>

/**
 * main - Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */

int main(void)
{
	int n = 1;
	int sum = 0;

	for (; n < 1024;)
	{
		if (n % 3 == 0)
			sum += n;
		else if (n % 5 == 0)
			sum += n;

		n++;
	}
	printf("%d\n", sum);
	return (0);
}
