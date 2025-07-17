#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - Struct printer
 *
 * @type: The type of variable to print
 * @f: The function associated with that variable type
 */
typedef struct printer
{
	char *type;
	void (*f)(va_list args);
} printer_t;

void print_char(va_list args);
void print_int(va_list args);
void print_string(va_list args);
void print_float(va_list args);
void (*get_print_func(char type))(va_list);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
