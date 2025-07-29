#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - free all memory in a list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = malloc(sizeof(list_t));
	/* iterate through the list */
	while (head->next != NULL)
	{
		temp = head->next;
		/* free the node from memory */
		free_list_node(head);
		head = temp;
	}
	free_list_node(temp);
	free_list_node(head);
}

/**
 * free_list_node - free memory for a node in list
 * @node: node to free
 *
 * Return: nothing
 */
void free_list_node(list_t *node)
{
	free(node->str);
	free(node->next);
	free(node);
}
