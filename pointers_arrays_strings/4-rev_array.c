#include "main.h"
#include "1-swap.c"

/**
 * reverse_array - reverse an array
 * @a: pointer to the array
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		swap_int(a + i, a + n - 1 - i);
		i++;
	}
}
