#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocate space in memory and copy a string into it
 * @str: pointer to the string to copy
 *
 * Return: pointer to the memory containing the string
 * NULL if there is insufficient memory
 */

char *_strdup(char *str)
{
	int i = 0, length = 0;
	char *ptr;

	/* invalid input */
	if (str == NULL)
		return (NULL);
	/* determine the length of str */
	while (str[length] != '\0')
	{
		length++;
	}
	/* add 1 to length to account for null byte */
	length++; 
	/* allocate memory using malloc */
	ptr = malloc(length * sizeof(char));
	/* copy string to memory providing it was successfully allocated */
	while (i < length && ptr != NULL)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
