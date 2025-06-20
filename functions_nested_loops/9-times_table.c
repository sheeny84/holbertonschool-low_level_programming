#include "main.h"
#include "7-print_last_digit.c"

/**
 * times_table - print 9 times table starting wiht 9
 *
 * Return: nothing
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
			if (res <= 9)
				_putchar(res + 48);
			else
			{
				if (res >= 10 && res < 20)
					_putchar('1');
				else if (res >= 20 && res < 30)
					_putchar('2');
				else if (res >= 30 && res < 40)
					_putchar('3');
				else if (res >= 40 && res < 50)
					_putchar('4');
				else if (res >= 50 && res < 60)
					_putchar('5');
				else if (res >= 60 && res < 70)
					_putchar('6');
				else if (res >= 70 && res < 80)
					_putchar('7');
				else if (res >= 80 && res < 90)
					_putchar('8');
				print_last_digit(res);

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
