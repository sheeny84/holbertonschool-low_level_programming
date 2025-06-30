#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to string containing bytes to accept from s
 *
 * Return: number of bytes in the initial segment of s which match accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *temp;
	int match, noMatch = 0;

	while (*s != '\0' && noMatch == 0) /* scan string s */
	{
		match = 0;
		temp = accept;
		while (*temp != '\0') /* scan accept for matches */
		{
			if (*s == *temp)
			{
				match = 1;
				n++;
			}
			temp = temp + 1;
		}
		if (match == 0) /* i.e. no match for the char in s */
			noMatch = 1;
		s = s + 1;
	}
	return (n);
}
