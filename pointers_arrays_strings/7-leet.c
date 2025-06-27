#include "main.h"
#include "2-strlen.c"

/**
 * leet - encode a string into 1337
 * @str: pointer to string
 *
 * Return: pointer to the string
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char str1[11] = "aAeEoOtTlL";
	char str2[11] = "4433007711";

	/* go through each char in the string */
	while (str[i] != '\0')
	{
		/* go through str1 and check for matches */
		while (str1[j] != '\0') {
			if (str[i] == str1[j])
				str[i] = str2[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
