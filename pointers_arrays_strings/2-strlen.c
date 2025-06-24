#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;
	char letter;

	letter = *s; /* get the first char in the string */
	while (letter != '\0')
	{
		length++;
		s = (s + 1); /* move pointer to the address of the next char */
		letter = *s;
	}
	return (length);
}
