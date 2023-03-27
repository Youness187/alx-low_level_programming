#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: array of string
 * Return: first number
*/
int _atoi(char *s)
{
	int i, f_num = 0, p = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		p *= s[i] == '-' ? -1 : 1;

		if (s[i] > 47 && s[i] < 58)
		{
			f_num = f_num < 0 ? (f_num * 10) - (s[i] - '0') : (s[i] - '0') * -1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	f_num *= p < 0 ? -1 : 1;
	return (f_num);
}
