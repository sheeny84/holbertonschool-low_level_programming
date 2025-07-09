#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include "1-init_dog.c"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: newly created dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *my_name = name;
	char *my_owner = owner;
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	init_dog(my_dog, my_name, age, my_owner);
	return (my_dog);
}
