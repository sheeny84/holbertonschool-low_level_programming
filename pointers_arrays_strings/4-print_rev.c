#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - print a string in revers
 * @s: pointer to the string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int length;

	length = _strlen(s);
	i = length;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
