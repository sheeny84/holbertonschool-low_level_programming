#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - write the last digit of an integer
 * @n: the integer to print the last digit
 *
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int lastDigit;

	n = _abs(n);
	lastDigit = n % 10;
	_putchar(48 + lastDigit);
	return (lastDigit);
}
