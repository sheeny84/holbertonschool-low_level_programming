#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
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
	while (format[i] != '\0')
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
	va_end(args);
}

/**
 * get_print_func - selects the correct print function based a char
 * @type: single char for each type
 *
 * Return: pointer to the print function
 */
void (*get_print_func(char type))(va_list)
{
	printer_t printers[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0;

	while (printers[i].type != NULL)
	{
		if (type == printers[i].type[0])
			return (printers[i].f);
		i++;
	}
	return (NULL);
}

/**
 * print_char - function to print the next character arg in a list
 * @args: list of arguments passed into the parent print function
 *
 * Return: nothing
 */
void print_char(va_list args)
{
	char x;

	x = va_arg(args, int);
	printf("%c", x);
}

/**
 * print_int - function to print the next integer arg in a list
 * @args: list of arguments passed into the parent print function
 *
 * Return: nothing
 */
void print_int(va_list args)
{
	int x;

	x = va_arg(args, int);
	printf("%d", x);
}

/**
 * print_float - function to print the next float arg in a list
 * @args: list of arguments passed into the parent print function
 *
 * Return: nothing
 */
void print_float(va_list args)
{
	float x;

	x = va_arg(args, double);
	printf("%f", x);
}

/**
 * print_string - function to print the next string arg in a list
 * @args: list of arguments passed into the parent print function
 *
 * Return: nothing
 */
void print_string(va_list args)
{
	char *x;

	x = va_arg(args, char *);
	printf("%s", x);
}
