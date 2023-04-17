#include <stdlib.h>
#include "dog.h"
/**
 * length - length of a string
 * @s: String
 * Return: length of a string
 */

int length(char *s)
{
	int i;

	for (i = 1; *s != '\0'; s++, i++)
		;
	return (i);
}
/**
 * cp_string - copy string
 * @s: string
 * @c: the string to copy from
 * @l: length of c
 * Return: void
 */
void *cp_string(char *s, char *c, int l)
{
	int i;

	for (i = 0; i <= l; i++)
		s[i] = c[i];
}
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: The new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l_name = length(name);
	int l_owner = length(owner);
	char *np, *op;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	np = malloc(sizeof(char) * l_name);
	if (np == NULL)
	{
		free(dog);
		return (NULL);
	}

	op = malloc(sizeof(char) * l_name);
	if (op == NULL)
	{
		free(dog);
		free(np);
		return (NULL);
	}

	cp_string(np, name, l_name);
	cp_string(op, owner, l_owner);

	dog->name = np;
	dog->age = age;
	dog->owner = op;

	return (dog);
}

