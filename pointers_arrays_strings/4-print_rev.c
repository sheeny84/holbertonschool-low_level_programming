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
	/* s[0] is first element and s[length - 1] is last */
	i = length - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
