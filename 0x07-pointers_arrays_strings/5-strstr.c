#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: bytes
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, z = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (needle[j + z] != '\0' && haystack[i + z] != '\0'
				&& needle[j + z] == haystack[i + z])
		{
			if (haystack[i + z] != needle[j + z])
				break;
			z++;
		}
		if (needle[j + z] == '\0')
			return (haystack + i);
		j++;
	}

	return ('\0');
}
