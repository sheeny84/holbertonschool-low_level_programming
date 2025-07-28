#include "lists.h"
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
			print_null();
		}
		else
		{
			_putchar('[');
			print_len(h->len);
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

/**
 * print_null - prints the string "[0] (nil)" using _putchar
 * 
 * Return: nothing
 */
void print_null()
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

/**
 * print_len - prints an unsigned int using _putchar and recursion
 * len: the unsigned int to print
 *
 * Return: nothing
 */
void print_len(unsigned int len)
{
	if ((len / 10) > 0) /* i.e. still more than single digits */
	{
		/* recursive call before printing to reverse print order */
		print_len(len / 10);
	}
	_putchar('0' + (len % 10)); /* print the digit */
}
