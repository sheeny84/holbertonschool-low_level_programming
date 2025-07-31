#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - delete the node at the given index
 * @h: pointer to the pointer to the head node of the list
 * @idx: index for the node
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	unsigned int i = 0; /* start comparison at idx 0 */
	dlistint_t *current, *prev, *next;

	/* check if *h is NULL i.e. no nodes in the list */
	if (*h == NULL)
		return (-1);
	/* iterate through the list till index */
	current = *h;
	while (current != NULL)
	{
		if (idx == i)
		{
			next = current->next;
			prev = current->prev;
			/* i.e. we are not at the last node in list */
			if (next != NULL)
				next->prev = prev;
			/* i.e. we are not at the start of the list */
			if (prev != NULL)
				prev->next = next;
			else /* deleted the first node so need to reset head*/
				*h = next;
			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}
	/* i.e. idx was not valid */
	return (-1);
}
