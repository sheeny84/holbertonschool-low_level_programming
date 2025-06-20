#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: the integer to perform the computation on
 *
 * Return: the computed absolute value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
