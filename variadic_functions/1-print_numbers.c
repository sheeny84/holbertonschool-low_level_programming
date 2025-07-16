#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n); /* start iterating through the list */
	while (i < n)
	{
		printf("%d", va_arg(ap, int)); /* print each arg */
		if (i < (n - 1))
			printf("%s", separator);
		else
			printf("\n");
		i++;
	}
	va_end(ap); /* free the list */
}
