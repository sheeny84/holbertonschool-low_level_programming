#include "main.h"
#include "4-pow_recursion.c"
#include <stdio.h>

/**
 * sqrt_calc - perform the square root calc recursively using the
 * repeated subtraction method
 * @n: number for square root calc
 * @m: number to subtract
 *
 * Return: result of the calc
 */

int sqrt_calc(int n, int m)
{
	if (n > 0)
	{
		n = n - m; /* subtract odd number from n */
		m = m + 2; /* get next odd number */
		return (1 + sqrt_calc(n, m));
	}
	else
		return (0);
}

/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: number for square root calculation
 *
 * Return: result of the calculation
 * -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int count, pow;

	count = sqrt_calc(n, 1);
	pow = _pow_recursion(count, 2);
	if (n != pow)
		return (-1);
	else
		return (count);
}
