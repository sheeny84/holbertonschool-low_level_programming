#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of chars and initialise it with a
 * specific char
 * @size: size of the array
 * @c: char to use for initialisation
 *
 * Return: pointer to the array of chars
 * NULL if the array fails or size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	while (i < size && ptr != NULL)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
