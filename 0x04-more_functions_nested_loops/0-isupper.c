#include "main.h"
/**
 * _isupper - checks for an uppercase letter.
 * @c: character number
 * Return:  1 if uppercase and 0 if lowercase
*/
int _isupper(int c)
{
	if (c > 97 && c < 123)
	{
		return (0);
	}

	return (1);
}
