#include "main.h"
#include <stdlib.h>

/**
 * cw - counts the number of words
 * @str: array of string
 * Return: number of words
 */
int cw(char *str)
{
	int i, n = 0;

	for (i = 0; str[i] != '\0'; i++)
		n = ((str[i] == ' ') ?
		(str[i + 1] != ' ' && str[i + 1] != '\0')
		? n + 1 : n : (i == 0) ? n + 1 : n);
	n++;
	return (n);
}

/**
 * strtow - unction that splits a string into words.
 * @str: string
 * Return: pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	int i, j, n_of_words, wc = 0, l;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n_of_words = cw(str);

	if (n_of_words == 1)
		return (NULL);
	w = (char **)malloc(n_of_words * sizeof(char *));
	if (w == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0';)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j] != '\0'; j++)
				;
			w[wc] = (char *)malloc(j * sizeof(char) + 1);

			if (w[wc] == NULL)
			{
				for (i = 0; i < wc; i++)
					free(w[i]);
				free(w);
				return (NULL);
			}

			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}

