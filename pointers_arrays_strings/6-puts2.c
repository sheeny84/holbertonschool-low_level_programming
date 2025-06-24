#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - print every other character of a string, starting with the first
 * @str: pointer to the string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	len = _strlen(str);
	while (i < len)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
