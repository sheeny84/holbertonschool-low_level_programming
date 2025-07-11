#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: pointer to the string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
