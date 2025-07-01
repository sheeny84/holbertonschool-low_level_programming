#include "main.h"

/**
 * pow_calc - calculate the value of x to the power of y,
 * assuming all the inputs are appropriate
 *
 * @x: base number
 * @y: exponent
 *
 * Return: result of the calculation
 */

int pow_calc(int x, int y)
{
	if (y > 0)
		return (x * pow_calc(x, y - 1));
	else
		return (1);
}

/**
 * _pow_recursion - calculate the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: result of the calculation
 * -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (pow_calc(x, y));
}
