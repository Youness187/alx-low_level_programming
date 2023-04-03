#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0, sq = size * size;

	for (i = 0; i < sq; i++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		if (i % (size - 1) == 0 && i != (sq - 1) && i != 0)
			sum2 += a[i];
	}
	printf("%d, %d\n", sum, sum2);
}
