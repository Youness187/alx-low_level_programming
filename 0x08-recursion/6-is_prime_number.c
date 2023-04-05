#include "main.h"
/**
 * sq - square test
 * @a: Number
 * @b: square Number
 * Return: the natural square root of a number.
 */
int sq(int a, int b)
{
	return ((a == (b * b)) ? b :
	(a < (b * b) ? (-1) :
	sq(a, ++b)));
}
/**
 * prime - function that returns 1 if the input integer is a prime number.
 * @n: Number
 * @m: Number
 * Return: t1 if the input integer is a prime number, otherwise return 0.
 */
int prime(int n, int m)
{
	return ((n % m == 0) ? 0 : (sq(n, 1) < m) ? 1 : prime(n, ++m));
}
/**
 * is_prime_number -  is a prime number
 * @n: Number
 * Return: t1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	return ((n < 2) ? 0 : (n < 4) ? 1 : prime(n, 2));
}

