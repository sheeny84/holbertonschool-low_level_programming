#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to string containing bytes to search for
 *
 * Return: pointer to the byte in s that matches a byte in accerp
 * NULL if no matching byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;
	int match = 0;

	while (*s != '\0' && match == 0) /* scan string s */
	{
		temp = accept;
		while (*temp != '\0' && match == 0)
		{
			if (*s == *temp)
				match = 1;
			temp = temp + 1;
		}
		if (match == 0)
			s = s + 1;
	}
	if (*s == '\0')
		return (0);
	else
		return (s);
}
