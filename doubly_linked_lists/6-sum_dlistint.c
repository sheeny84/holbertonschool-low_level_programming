#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * sum_dlistint - sum all the elements of a dlistint_t
 * @head: pointer to head node of the list
 *
 * Return: the sum of the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* number of nodes */

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
