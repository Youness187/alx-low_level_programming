#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: String
 * Return: String into 1337.
*/
char *leet(char *s)
{
	int i, j;
	char Char[] = "aAeEoOtTlL";
	char Numbers[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == Char[j])
			{
				s[i] = Numbers[j / 2];
				break;
			}
		}
	}
	return (s);
}
