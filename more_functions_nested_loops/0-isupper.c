#include "main.h"

/**
 * _isupper - check for an uppercase character
 * @c: the character to perform the check on
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	/* uppercase characters are 65 to 90 in ASCII */
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
