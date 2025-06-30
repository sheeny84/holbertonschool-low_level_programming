#include "main.h"

/**
 * _memcpy - copy a memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
