#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * err - error function
 * @n: Number to quit
*/
void err(int n)
{
	printf("Error\n");
	exit(n);
}
/**
 * main - print results of the operation
 * @argc: the number of arguments
 * @argv: array of pointers to args
 * Return: ALways 0
 */
int main(int argc, char *argv[])
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);
	char *op = argv[2];

	if (argc != 4)
		err(98);
	else if (get_op_func(op) == NULL || op[1] != '\0')
		err(99);
	else if ((*op == '%' && n2 == 0) || (*op == '/' && n2 == 0))
		err(100);

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
