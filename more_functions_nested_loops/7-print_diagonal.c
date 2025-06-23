#include "main.h"

/**
 * print_diagonal - draw a diagonal line in the terminal using the '\'
 * character
 * @n: number of times to print '\'
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int counter = 0;
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			for (i = 0; i < counter; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			counter++;
		}
	}
}
