#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: number
 * Return: Factorial of 0 is 1
*/

int factorial(int n)
{
	return ((n < 0) ? (-1) :
	(n == 0) ? (1) :
	(n * factorial(n - 1)));
}

