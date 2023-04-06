#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argc;
	(void) argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
