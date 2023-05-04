#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits, max = 1;

	bits = (sizeof(unsigned long int) * 8);
	if (index > bits)
		return (-1);

	max = ~(max << index);
	*n = (*n & max);

	return (1);
}

