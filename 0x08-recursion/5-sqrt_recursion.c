#include "main.h"
/**
 * sq_test - square test
 * @a: Number
 * @b: square Number
 * Return: the natural square root of a number.
 */
int sq_test(int a, int b)
{
	return ((a == (b * b)) ? b :
	(a < (b * b) ? (-1) :
	sq_test(a, ++b)));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Number
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (sq_test(n, 1));
}

