#include "main.h"
#include "2-strlen.c"

/**
 * _puts - print a string to stdout
 * @s: pointer to the string to print
 *
 * Return: nothing
 */

void _puts(char *s)
{
	int i = 0;
	int length;

	length = _strlen(s);
	while (i < length)
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
