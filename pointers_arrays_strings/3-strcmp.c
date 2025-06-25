#include "main.h"
#include "2-strlen.c"

/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if strings match
 * negative number if s1 is greater than s2
 * positive number if s2 is greater than s1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && diff == 0)
	{
		diff = s2[i] - s1[i];
		i++;
	}
	return (diff);
}
