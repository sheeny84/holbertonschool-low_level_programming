#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the memory containing the concatenated string
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, length1 = 0, length2 = 0;
	char *ptr;

	/* determine the length of str1 and str2 */
	while (s1 != NULL && s1[length1] != '\0')
	{
		length1++;
	}
	while (s2 != NULL && s2[length2] != '\0')
	{
		length2++;
	}
	/* allocate memory using malloc */
	ptr = malloc((length1 + length2) * sizeof(char));
	/* copy string to memory providing it was successfully allocated */
	if (ptr == NULL)
		return (NULL);
	while (i < length1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < length2)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	if (s1 != NULL && s2 != NULL)
		ptr[i+j] = '\0';
	return (ptr);
}
