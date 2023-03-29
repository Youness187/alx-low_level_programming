#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: String
 * Return: capitalized words of a string.
*/

char *cap_string(char *s)
{
	int i = 0;
	int j;
	char Char[] = "\n\t ,;.!?(){}\"";

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i - 1] == Char[j])
				{
					s[i] -= 32;
					break;
				}
				else if (i == 0)
				{
					s[i] -= 32;
					break;
				}
			}
		}
		i++;
	}
	return (s);
}
