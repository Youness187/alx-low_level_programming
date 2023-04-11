#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: int size width
 * @height: int size height
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **intg, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	intg = malloc(height * sizeof(*intg));
	if (intg == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		intg[i] = malloc(width * sizeof(**intg));
		if (intg[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			intg[i][j] = 0;
	}
	return (intg);
}

