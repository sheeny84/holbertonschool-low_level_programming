#include "lists.h"
#include "_putchar.c"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - print all the elements of a list
 * @h: pointer to head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	int nodes = 0; /* number of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
			}
		else
		{
			_putchar('[');
			_putchar(h->len + 48);
			_putchar(']');
			_putchar(' ');
			while (i < h->len)
			{
				_putchar(h->str[i]);
				i++;
			}
			_putchar('\n');
		}
	nodes++;
	i = 0; /* reset i for the next string */
	h = h->next; /* move to the next node */
	}
	return (nodes);
}
