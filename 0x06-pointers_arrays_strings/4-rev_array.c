#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array of integers
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i, l = n - 1;

	for (i = 0; i < l; i++, l--)
	{
		tmp = a[i];
		a[i] = a[l];
		a[l] = tmp;
	}
}
