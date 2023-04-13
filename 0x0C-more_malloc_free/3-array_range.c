#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *n, i, m = min;

	if (min > max)
		return (NULL);

	n = malloc((max - min + 1) * sizeof(int));
	if (n == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++, m++)
		n[i] = m;
	return (n);
}

