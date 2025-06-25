#include "main.h"
#include "2-strlen.c"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str: pointer to string
 *
 * Return: pointer to the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') /* i.e. lowercase */
			str[i] = str[i] - 32; /* diff in ascii */
		i++;
	}
	return (str);
}
