#include "main.h"

/**
 * jack_bauer - print every minute of the day in the format HH:MM
 * from 00:00 to 23:59
 *
 * Return: nothing.
 */

void jack_bauer(void)
{
	char hour1 = '0';
	char hour2 = '0';
	char min1 = '0';
	char min2 = '0';

	while (hour1 <= '2')
	{
		while (hour2 <= '9')
		{
			while (min1 <= '5')
			{
				while (min2 <= '9')
				{
					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
					min2 = min2 + 1;
				}
				min1 = min1 + 1;
				min2 = '0';
			}
			if (hour1 == '2' && hour2 == '3')
				hour2 = '9' + 1;
			else
				hour2 = hour2 + 1;
			min1 = 0;
		}
		hour1 = hour1 + 1;
		hour2 = '0';
	}
}
