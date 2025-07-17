#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "3-get_print_func.c"
#include "3-print_functions.c"

/**
 * print_all - print all the arguments provided
 * @format: list of the types of the arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	void (*f)(va_list);

	va_start(args, format);
	/* iterate through format string */
	while (format != NULL && format[i] != '\0')
	{
		/* call get_print_func for each char in the format string */
		f = get_print_func(format[i]);
		if (f != NULL)
		{
			f(args);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	printf("\n");
}
