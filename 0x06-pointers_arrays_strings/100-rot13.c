#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: string
 * Return: encodes a string using rot13.
*/
char *rot13(char *s)
{
	char in_c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out_c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == in_c[j])
			{
				s[i] = out_c[j];
				break;
			}
		}
	}

	return (s);
}
