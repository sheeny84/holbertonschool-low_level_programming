#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - writes the alphabet in lowercase 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		print_alphabet();
		n++;
	}
}
