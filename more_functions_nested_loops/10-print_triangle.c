#include "main.h"

/**
 * print_triangle - print a triangle using the '#' character
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i = 1;
	int space = size - 1;
	int hash = 1;

	while (i <= size)
	{
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}
		_putchar('\n');
		i++;
		space = size - i;
		hash = i;
	}
}
