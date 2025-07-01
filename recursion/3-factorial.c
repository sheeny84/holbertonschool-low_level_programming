#include "main.h"

/**
 * factorial_cacl - perform the factorial calculation
 * @n: number for calculation
 *
 * Return: result of factorial
 */

int factorial_calc(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
		return (1);
}

/**
 * factorial - return the factorial of a given number
 * @n: number to calculate factorial
 *
 * Return: result of the factorial calculation
 * -1 if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (factorial_calc(n));
}
