#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: pointer to the string
 * @c: character to locate
 *
 * Return: pointer to first occurence of character in the string
 */

char *_strchr(char *s, char c)
{
	int foundChar = 0;

	while (*s != '\0' && foundChar != 1)
	{
		if (*s == c)
			foundChar = 1;
		else
			s = s + 1;
	}
	if (*s == '\0')
		return (0);
	else
		return (s);
}
