#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to integer
 * @s: pointer to string to convert
 *
 * Return: integer that is the result of the conversion
 */

int _atoi(char *s)
{
	int i = 0, len = 0, neg = 0;
	char digit;
	unsigned int result = 0;
	/* consume characters before number starts */
	while ((*s < '0' || *s > '9') && *s != '\0')
	{
		if (*s == '-')
			neg++;
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
		result = ((digit - 48) + (result * 10));
		i++;
	}
	/* account for negative numbers */
	if (neg % 2 == 1)
		return (result * -1);
	else
		return (result);
}
