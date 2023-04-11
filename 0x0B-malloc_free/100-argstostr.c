#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array pointer
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, z = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, z++)
	{
		for (j = 0; av[i][j] != '\0'; j++, z++)
			;
	}
	str = malloc((z * sizeof(char)) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0, z = 0; i < ac; i++, z++)
	{
		for (j = 0; av[i][j] != '\0'; j++, z++)
			str[z] = av[i][j];

		str[z] = '\n';
	}
	str[z] = '\0';
	return (str);
}

