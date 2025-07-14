#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function does not
 * return 0, otherwise, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result; /* store result of cmp function */

	while (i < size)
	{
		result = cmp(array[i]);
		/* we have a match */
		if (result != 0)
			return (i);
		i++;
	}
	/* if there is no match, or size <= 0 */
	return (-1);
}
