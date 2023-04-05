#include "main.h"
/**
 * wildcmp - function that compares two strings
 * @s1: string
 * @s2: string
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp((++s1), (++s2)));

	return ((*s2 == '*') ?
	((wildcmp(s1, ++s2) || (*s1 != '\0' && wildcmp(++s1, s2))) ? 1 : 0) : 0);
}

