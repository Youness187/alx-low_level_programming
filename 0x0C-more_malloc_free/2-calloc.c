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

	return ((nmemb <= 0 || size <= 0) ?
	NULL : (n = malloc(nmemb * size), n == NULL) ? NULL : n );
}

