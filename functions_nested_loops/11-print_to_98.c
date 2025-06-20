#include "main.h"
#include "6-abs.c"

/**
 * print_to_98 - print all natural numbers from n to 98
 * note that n can be negative or above 98
 * @n: starting number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int temp;

	while (n < 98)
	{
		if (n < 0)
		{
			_putchar('-');
			temp = _abs(n);
		}
		else
			temp = n;
		/* print double digit numbers */
		if (temp > 9)
			_putchar((temp / 10) + '0');
		/* print last digit */
		_putchar((temp % 10) + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n > 98)
	{
		if (n >= 100)
		{
			_putchar((n / 100) + '0');
			_putchar(((n - 100) / 10) + '0');
		}
		else
			_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
