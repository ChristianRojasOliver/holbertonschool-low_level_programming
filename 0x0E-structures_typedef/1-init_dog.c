#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function
 * @d: parameter
 * @name: character
 * @age: float
 * @owner: character
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
