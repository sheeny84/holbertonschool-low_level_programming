#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum
 * @a: pointer to the start of the square matrix
 * @size: size of the matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, result1 = 0, result2 = 0;

	while (i < size)
	{
		result1 += a[(size * i) + i];
		result2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", result1, result2);
}
