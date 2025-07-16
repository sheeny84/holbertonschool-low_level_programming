#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all the provided parameters
 * @n: number of parameters
 *
 * Return: result of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int total = 0;
	va_list ap;

	va_start(ap, n); /* start iterating through the list */
	while (i < n)
	{
		total += va_arg(ap, int); /* get each arg of type int */
		i++;
	}
	va_end(ap); /* free the list */
	return (total);
}
