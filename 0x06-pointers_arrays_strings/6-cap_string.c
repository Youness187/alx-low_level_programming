#include "main.h"
/**
 * check - chakes if a is an A or E or O or T or L
 * @a: char
 * @b: char
 * Return: a
*/

char check(char a, char b)
{
	int i;
	char Char[] = "\n\t ,;.!?(){}\"";

	for (i = 0; i < 13; i++)
	{
		if (b == Char[i])
		{
			a -= 32;
			break;
		}
	}
	return (a);
}
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: String
 * Return: capitalized words of a string.
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = check(s[i], s[i - 1]);
		}
		i++;
	}
	return (s);
}
