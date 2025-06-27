#include "main.h"
#include "2-strlen.c"

/**
 * cap_string - capitalise all words of a string
 * @str: pointer to string
 *
 * Return: pointer to the string
 */

char *cap_string(char *str)
{
	int i = 0;
	int separator = 0;
	int newWord = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			newWord = 1;

		if (newWord == 1)
			str[i] = str[i] - 32; /* capitalise the char */

		if (str[i] == ' ' || str[i] == '\n' || str[i] == ','
				|| str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?'
				|| str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')'
				|| str[i] == '{' || str[i] == '}'
				|| str[i] == '\t')
			separator = 1;
		else
			separator = 0;
		/* check if the next character is lowercase i.e. new word */
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && separator)
			newWord = 1;
		else
			newWord = 0;
		i++;
	}
	return (str);
}
