#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenate two stringe
 * @dest: pointer to string to append to
 * @src: pointer to the string to be appended
 *
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, i = 0;

	/* get the length of the dest string */
	length = _strlen(dest);
	/* add the source string to the end of dest */
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	/* add back in null byte */
	dest[length + i] = '\0';
	return (dest);
}
