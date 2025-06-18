#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int strLength;
	char str[] = "_putchar";

	strLength = 8;
	while (n < strLength)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
