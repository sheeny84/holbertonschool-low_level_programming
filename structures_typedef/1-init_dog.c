#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialise a variable of type struct dog
 * @d: struct dog to initialise
 * @name: pointer to name for the dog
 * @age: age of the dog
 * @owner: pointer to owner name
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	if (d == NULL)
		d = &my_dog;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
