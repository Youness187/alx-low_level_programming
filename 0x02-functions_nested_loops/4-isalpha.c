#include "main.h"

/**
 * _isalpha - fuction that checks for alphabets8
 * @c: parameter to be checked
 * Return: 1 if it is an alphabet
 * and 0 otherwise
 */
int _isalpha(int c)
{
	int i = 0;
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		i = 1;

	return (i);
}