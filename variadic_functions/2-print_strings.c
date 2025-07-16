#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ap;

	va_start(ap, n); /* start iterating through the list */
	while (i < n)
	{
		str = va_arg(ap, char *); /* arg is of type char pointer */
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap); /* free the list */
}
