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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* malloc failed */
		return (NULL);

	/* set data fornew_node */
	new_node->n = n;
	/* check if *h is NULL i.e. no nodes in the list yet */
	if (*h == NULL && idx == 0)
	{
		new_node->next = NULL;
		new_node->prev = *h;
		*h = new_node;
		return (new_node);
	}
	/* iterate through the list till index */
	head = *h;
	while (head->next != NULL)
	{
		i++;
		if (idx == i)
		{
			temp = head->next;
			head->next = new_node;
			new_node->prev = head;
			temp->prev = new_node;
			new_node->next = temp;
			head = *h;
			return (new_node);
		}
		head = head->next;
	}
	return (NULL);
}
