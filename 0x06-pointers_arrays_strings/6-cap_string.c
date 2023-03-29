#include "main.h"
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
		if ((s[i] >= 97 && s[i] <= 122) && (s[i - 1] <= 32 && s[i - 1] >= 0))
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
