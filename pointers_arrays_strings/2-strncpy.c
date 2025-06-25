#include "main.h"
#include "2-strlen.c"

/**
 * _strncpy - copy a string
 * @dest: pointer to string destination
 * @src: pointer to the string to be copied
 * @n: number of bytes to copy
 *
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	/* if src is smaller than n, add the null byte */
	if (src[i] == '\0') 
		dest[i] = '\0';
	return (dest);
}
