#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf((d->name == NULL) ? "Name: %p\n" : "Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf((d->owner == NULL) ? "Owner: %p\n" : "Owner: %s\n", d->owner);
}

