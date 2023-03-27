#include "main.h"
/**
 * rev_string -  function that reverses a string
 * @s: string
*/

void rev_string(char *s)
{
	int i, leng = _strlen(s) - 1;
	char tmp;

	for (i = 0; i < leng; i++)
	{
		tmp = s[i];
		s[i] = s[leng];
		s[leng] = tmp;
		leng--;
	}
}
