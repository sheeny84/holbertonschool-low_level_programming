#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory
 * NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* invalid value for nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	return (ptr);
}
