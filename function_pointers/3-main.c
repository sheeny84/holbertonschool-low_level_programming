#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - description of function
 * @argc: count of the number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *s;

	/* invalid number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* process input parameters */
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	/* invalid operator */
	if ((s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] != '/'
			&& s[0] != '%') || (s[1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	/* cannot divid by zero */
	if ((s[0] == '/' || s[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* perform operation */
	result = get_op_func(s)(a, b);
	printf("%d\n", result);
	return (0);
}
