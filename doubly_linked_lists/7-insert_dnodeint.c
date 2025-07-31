#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - add a new node at the given index
 * @h: pointer to the pointer to the head node of the list
 * @idx: index for the new node
 * @n: int data for the new node
 *
 * Return: the address of the new element or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp, *head;

	/* check if *h is NULL i.e. no nodes in the list yet */
	/* if idx is not 0 then we cannot add the new node */
	if (*h == NULL && idx != 0)
		return (NULL);

	/* add node to the beginning of the list if idx is 0 */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* iterate through the list till index */
	head = *h;
	while (head->next != NULL)
	{
		if (idx == i)
		{
			/* create new node */
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL) /* malloc failed */
				return (NULL);
			new_node->n = n;
			temp = head->next;
			head->next = new_node;
			new_node->prev = head;
			temp->prev = new_node;
			new_node->next = temp;
			head = *h;
			return (new_node);
		}
		i++;
		head = head->next;
	}
	/* add node at the end of the list */
	if (idx == i)
		return (add_dnodeint_end(h, n));
	/* i.e. idx was not valid */
	return (NULL);
}
