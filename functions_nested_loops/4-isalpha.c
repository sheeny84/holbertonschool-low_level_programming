#include "main.h"

/**
 * _isalpha - checks if c is an alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
