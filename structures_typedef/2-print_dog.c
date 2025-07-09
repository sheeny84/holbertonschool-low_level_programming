#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the members of struct dog
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)");
	else
		printf("%s", d->name);
	printf("\nAge: %1.6f\nOwner: ", d->age);
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("%s", d->owner);
	printf("\n");
}
