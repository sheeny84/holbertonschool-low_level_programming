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
	int n, i = 0, len = 0;

	len = _strlen(str);
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	while (i < n)
	{
		_putchar((str[len - n + i]));
		i++;
	}
	_putchar('\n');
}
