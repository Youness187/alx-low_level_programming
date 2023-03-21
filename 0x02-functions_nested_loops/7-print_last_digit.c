#include "main.h"
/**
 * print_last_digit - function tha prints last digit
 * @n: function parameter
 * Return: lastNum
 */
int print_last_digit(int n)
{
int lastNum = n % 10;
_putchar(lastNum + '0');
return lastNum;
}