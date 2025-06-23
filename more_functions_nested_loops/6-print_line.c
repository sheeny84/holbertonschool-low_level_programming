#include "main.h"

/**
 * print_line - draw a straight line in the terminal using '_' character
 * @n: number of times to print '_'
 *
 * Return: nothing
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
