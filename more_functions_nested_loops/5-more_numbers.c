#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14 followed by a new line,
 * 10 times.
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				_putchar('1');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
