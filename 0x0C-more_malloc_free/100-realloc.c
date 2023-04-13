#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer
 * @old_size: old size of ptr
 * @new_size: new size of ptr
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	c = ptr;

	for (i = 0; i < old_size; i++)
		p[i] = c[i];

	free(ptr);
	return (p);
}

