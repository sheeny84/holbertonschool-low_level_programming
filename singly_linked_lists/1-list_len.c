#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - get the number of elements in the list
 * @h: pointer to head node of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int nodes = 0; /* number of nodes */

	while (h != NULL)
	{
		nodes++;
		h = h->next; /* move to the next node */
	}
	return (nodes);
}
