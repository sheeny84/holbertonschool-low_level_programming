#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

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
	if (x == NULL)
		printf("(nil)");
	else
		printf("%s", x);
}
