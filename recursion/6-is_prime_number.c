#include "main.h"
#include "5-sqrt_recursion.c"
#include <stdio.h>

/**
 * prime_number_calc - check if a integer is a prime number
 * @n: number to check
 * @div: number to divide by
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int prime_number_calc(int n, int div)
{
	if (div >= 2)
	{
		if (n % div == 0) /* not a prime */
			return (0);
		prime_number_calc(n, div - 1);
	}
	return (1);
}

/**
 * is_prime_number - check if a integer is a prime number by checking
 * its divisibility by numbers from 2 up to the square root
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int sqrt;

	if (n <= 1) /* 1 is not a prime number and negative are not prime */
		return (0);
	sqrt = sqrt_calc(n, 1); /* find approx square root */
	return (prime_number_calc(n, sqrt));
}
