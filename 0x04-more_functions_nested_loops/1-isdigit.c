#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character number
 * Return:  1 if its digit and 0 if its not
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
