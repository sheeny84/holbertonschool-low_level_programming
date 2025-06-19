#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the character to print the sign
 *
 * Return: 1 if n is greater than 0,
 * 0 if n is greater than 0, and,
 * -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
}
