#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * dlistint_len - return the number of elements in a dlistint_t list
 * @h: pointer to head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0; /* number of nodes */

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
