#include "main.h"
/**
 * check - chakes if a is an A or E or O or T or L
 * @a: char
 * Return: a
*/

char check(char a)
{
	int i;
	char Char[] = "aAeEoOtTlL";
	char Numbers[] = "43071";

	for (i = 0; i < 8; i++)
	{
		if (a == Char[i])
		{
			a = Numbers[i / 2];
			break;
		}
	}
	return (a);
}

/**
 * leet - function that encodes a string into 1337.
 * @s: String
 * Return: String into 1337.
*/
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = check(s[i]);
	}
	return (s);
}
