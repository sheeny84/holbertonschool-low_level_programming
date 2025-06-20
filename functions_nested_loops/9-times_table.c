#include "main.h"
#include "7-print_last_digit.c"

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
			if (n2 == 0)
				_putchar(res + 48);
			else if	(res <= 9)
			{
				_putchar(' ');
				_putchar(res + 48);
			}
			else
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
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
