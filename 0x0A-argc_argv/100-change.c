#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 if function runs.
 */


int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		cents -= (cents >= 25) ? 25 :
			(cents >= 10) ? 10 :
			(cents >= 5) ? 5 :
			(cents >= 2) ? 2 : 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}

