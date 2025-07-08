#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory using malloc and validate the success
 * @b: number of bytes to be allocated
 *
 * Return: pointer to the allocated memory
 * termination of process with status value of 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
