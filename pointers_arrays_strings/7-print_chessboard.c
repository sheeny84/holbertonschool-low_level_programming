#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: pointer to the chessboard array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
