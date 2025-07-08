#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes of s2 to use
 *
 * Return: pointer to the memory containing the concatenated string
 * NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;
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
	/* set length2 to n unless n is greater than length2 */
	if (n < length2)
		length2 = n;
	/* allocate memory using malloc and accounting for null byte */
	ptr = malloc((length1 + length2 + 1) * sizeof(char));
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
	ptr[i + j] = '\0';
	return (ptr);
}
