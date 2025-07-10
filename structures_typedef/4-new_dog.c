#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include "1-init_dog.c"
#include "1-strdup.c"

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
	char *my_name;
	char *my_owner;
	dog_t *my_dog;

	my_name = _strdup(name);
	if (my_name == NULL)
		return (NULL);

	my_owner = _strdup(owner);
	if (my_owner == NULL)
	{
		free(my_name);
		return (NULL);
	}
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_name);
		free(my_owner);
		return (NULL);
	}
	init_dog(my_dog, my_name, age, my_owner);
	return (my_dog);
}
