#include "main.h"

/**
 * print_alphabet - writes the alphabet in lowercase using _putchar
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
