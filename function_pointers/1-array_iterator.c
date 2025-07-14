#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of an array
 * @array: array to execute function on
 * @size: size of the array
 * @action: pointer to the function to execute
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0; /* equivalent type to size_t */

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
