#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - initialise a two dimensional array (grid) of integers to 0
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2 dimensional array of integers
 * NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j = 0, k = 0;

	/* invalid width or height */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for pointers to pointers */
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL) /* i.e. malloc failed */
		return (NULL);

	/* allocate memory for each row */
	while (i < height)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL) /* i.e. malloc failed */
		{
			/* free memory before returning NULL */
			while (k < i)
			{
				free(ptr[k]);
				k++;
			}
			free(ptr);
			return (NULL);
		}
		/* initialise memory to 0 */
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
