#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: pointer to the string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;

	len = _strlen(s);
	while (i < len / 2)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = temp;
		i++;
	}
}
