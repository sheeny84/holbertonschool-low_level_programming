#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - add numbers
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 on success
 * 1 if symbols are provided as arguments
 */

int main(int argc, char *argv[])
{
	int temp, res = 0, i = 1, j = 0;
	char *str;

	if (argc < 2) /* no args provided other than function name */
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			temp = 0;
			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] >= 48 && str[j] <= 57)
				{
					temp = temp * 10 + (str[j] - 48);
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			res += temp;
			i++;
		}
		printf("%d\n", res);
		return (0);
	}
}
