#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: pointer to name of the dog
 * @age: age of the dog
 * @owner: pointer to owner of the dog
 *
 * Description: struct for dog type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
