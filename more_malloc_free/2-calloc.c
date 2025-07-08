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
	unsigned int i = 0;
	char *ptr; /* use char pointer so each byte can be initialised */

	/* invalid value for nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory and initialise it to 0 */
	ptr = malloc(nmemb * size);
	while (i < (nmemb * size) && ptr != NULL)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
