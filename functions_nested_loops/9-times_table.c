#include "main.h"
#include "7-print_last_digit.c"

/**
 * print_double_digit - print double digit number
 * @n: number to print
 *
 * Return: nothing
 */

void print_double_digit(int n)
{
	if (n >= 10 && n < 20)
		_putchar('1');
	else if (n >= 20 && n < 30)
		_putchar('2');
	else if (n >= 30 && n < 40)
		_putchar('3');
	else if (n >= 40 && n < 50)
		_putchar('4');
	else if (n >= 50 && n < 60)
		_putchar('5');
	else if (n >= 60 && n < 70)
		_putchar('6');
	else if (n >= 70 && n < 80)
		_putchar('7');
	else if (n >= 80 && n < 90)
		_putchar('8');
	print_last_digit(n);
}

/**
 * times_table - print 9 times table starting wiht 9
 *
 * Return: nothing
 *
 */

void times_table(void)
{
	int n1 = 0;
	int n2 = 0;
	int res;

	while (n1 <= 9)
	{
		while (n2 <= 9)
		{
			res = n1 * n2;
			if (n2 != 0 && res <= 9)
			{
				_putchar(' ');
				_putchar(res + 48);
			}
			else
			{
				print_double_digit(res);
			}
			if (n2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			n2 = n2 + 1;
		}
		_putchar('\n');
		n1 = n1 + 1;
		n2 = 0;
	}
}
