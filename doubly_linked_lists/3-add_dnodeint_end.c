#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: pointer to the pointer to the head node of the list
 * @n: int data for the new node
 *
 * Return: the address of the new element or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* malloc failed */
		return (NULL);

	/* set data for new_node */
	new_node->n = n;
	new_node->next = NULL; /*end of the list */

	/* check if *head is NULL i.e. no nodes in the list yet */
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = *head;
	}
	else /* iterate to the end of the list */
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
