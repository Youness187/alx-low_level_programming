#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	int count = 0;

	while (d)
	{
		count++;
		d &= (d - 1);
	}

	return (count);
}

