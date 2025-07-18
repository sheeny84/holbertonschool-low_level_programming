#include "main.h"

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
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else /* i.e. y = 0 */
		return (1);
}
