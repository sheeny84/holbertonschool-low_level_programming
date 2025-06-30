#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate a substring in a string
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to locate
 *
 * Return: pointer to the beginning of located substring or,
 * NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *needleTemp = needle;
	char *haystackTemp;
	int match = 0, noMatch = 0;
	/* needle is empty case */
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0' && match == 0) /* scan haystack */
	{
		needle = needleTemp; /* reset needle to start */
		noMatch = 0; /* reset no match flag */
		/* check if haystack matches first byte of needle */
		if (*haystack == *needle)
		{
			/* store the current location of haystack */
			haystackTemp = haystack;
			/* check if the rest of needle matches */
			while (*needle != '\0' && noMatch == 0)
			{
				if (*needle != *haystack)
					noMatch = 1;
				needle = needle + 1;
				haystack = haystack + 1;
			}
			/* if we reached the end of needle, its a match */
			if (*needle == '\0')
				match = 1;
		}
		else
			haystack = haystack + 1;
	}
	if (match == 1)
		return (haystackTemp);
	else
		return (0);
}
