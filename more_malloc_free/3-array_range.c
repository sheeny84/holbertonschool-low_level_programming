#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array of integers from min to max inclusive
 * @min: starting value for the array
 * @max: final value for the array
 *
 * Return: pointer to the allocated memory
 * NULL on failure
 */

int *array_range(int min, int max)
{
	int i = 0, length;
	int *ptr;

	/* invalid input */
	if (min > max)
		return (NULL);

	/* allocate memory */
	length = max - min + 1;
	ptr = malloc(length * sizeof(int));
	while (i < length && ptr != NULL)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
