#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: pointer to the name
 * @f: pointer to a function that takes a char pointer as a parameter and
 * returns nothing
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
