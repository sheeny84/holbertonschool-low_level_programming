#include "main.h"

/**
 * print_square - print a square using the '#' character
 * @size: size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
