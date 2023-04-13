#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: number of element
 * @size: bytes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *n;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		n[i] = 0;

	return (n);
}

