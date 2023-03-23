#include <stdio.h>
#include <math.h>
/**
 * main - Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */

int main(void)
{
	int long n = 612852475143;
	double a = sqrt(n);
	int i = (int) a;

	for (; i > 2; i++)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			break;
		}

	}

	return (0);
}
