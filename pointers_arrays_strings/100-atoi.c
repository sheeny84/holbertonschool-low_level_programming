#include "main.h"
#include <stdio.h>

/**
 * _pow - computer the power of two integers
 * @x: base integer
 * @n: exponent
 *
 * Return: result of power calculation
 */

int _pow(int x, int n)
{
	int i;
	int number = 1;
	
	for (i = 0; i < n; ++i)
		number *= x;
	return (number);
}

/**
 * _atoi - convert string to integer
 * @s: pointer to string to convert
 *
 * Return: integer that is the result of the conversion
 */

int _atoi(char *s)
{
	int i = 0, len = 0, result = 0;
	char digit;

	/* consume characters before number starts */
	while (*s < '0' || *s > '9')
	{
		s = s + 1;
	}
	/* get the length of the number */
	while (*s >= '0' && *s <= '9')
	{
		len++;
		s = s + 1;
	}
	/* convert to integer by consuming each digit */
	while (i < len)
	{
		digit = *(s - len + i);
		result += ((digit - 48) * (_pow(10, len - 1 - i)));
		i++;
	}
	/* account for negative numbers */
	digit = (*(s - len - 1));
	if (digit == '-')
		result = result * -1;
	return (result);
}
