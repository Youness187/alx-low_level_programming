#include "main.h"
/**
 * leng - function
 * @s: string
 * @n: number
 * Return: length of the string
 */
int leng(char *s, int n)
{
return ((s[1] == '\0') ? n + 1 : leng(++s, ++n));
}
/**
 * palindrome - function
 * @s: string
 * @l: length of the string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int palindrome(char *s, int l)
{
return ((s[0] == s[l]) ? l <= 0 ? 1 : palindrome(++s, l - 2) : 0);
}
/**
 * is_palindrome - function
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
return (palindrome(s, leng(s, 0) - 1));
}

