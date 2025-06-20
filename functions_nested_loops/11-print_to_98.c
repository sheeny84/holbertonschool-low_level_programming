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

	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-');
			temp = _abs(n);
		}
		else
			temp = n;
		if (temp >= 100)
		{
			_putchar((temp / 100) + '0');
			temp = temp - 100;
			if (temp < 10)
				_putchar((temp / 10) + '0');
		}
		/* print double digit numbers */
		if (temp >= 10)
			_putchar((temp / 10) + '0');
		/* print last digit */
		_putchar((temp % 10) + '0');
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
