#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer to the pointer to the head node of the list
 * @n: int to add to the new node
 *
 * Return: the address of the new element or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* malloc failed */
		return (NULL);

	/* set data for new_node */
	new_node->n = n;
	new_node->prev = NULL; /* start of the list */
	new_node->next = *head;

	/* check if *head is NULL i.e. no nodes in the list yet */
	if (*head == NULL)
		*head = new_node;
	else /* set *head prev to new_node */
		(*head)->prev = new_node;

	/* set head to new_node */
	*head = new_node;

	return (new_node);
}
