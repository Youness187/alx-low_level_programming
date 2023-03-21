#include "main.h"
/**
 * _islower - function to print in lower case
 * Return: 1 if it is a lower case
 * and 0 otherwise
 */

int _islower(int c)
{
int i = 0;
if (c >= 97 && c <= 122)
{
    i = 1;
}

return i;
}
