#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: Number
 * @y: The power
 * Return: the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	return ((y == 0) ? (1)
	: (y < 0) ? (-1)
	: (x * _pow_recursion(x, y - 1)));
}

