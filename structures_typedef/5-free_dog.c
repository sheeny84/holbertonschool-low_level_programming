#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include "1-init_dog.c"

/**
 * free_dog - free dogs
 * @d: dog to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
