#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}
	return ((size == 0) ? NULL : m);
}

