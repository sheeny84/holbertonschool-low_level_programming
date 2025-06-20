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

	lastDigit = n % 10;
	lastDigit = _abs(lastDigit);
	_putchar(48 + lastDigit);
	return (lastDigit);
}
