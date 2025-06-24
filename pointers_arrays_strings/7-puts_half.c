#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print the second half of a string
 * @str: pointer to the string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0, len = 0;

	len = _strlen(str);
	while (i < ((len + 1) / 2))
	{
		_putchar(*(str + (len / 2) + i));
		i++;
	}
	_putchar('\n');
}
