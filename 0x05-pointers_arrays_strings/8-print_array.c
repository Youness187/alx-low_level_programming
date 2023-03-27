#include <stdio.h>
#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line.
 * @a: array of numbers
 * @n: lenght of array a
*/
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		i == n - 1 ? printf("%d", a[i]) : printf("%d, ", a[i]);
	}
	printf("\n");
}
