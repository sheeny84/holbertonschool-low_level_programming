#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - add a new node at the beginning of a list
 * @head: pointer to the pointer at the head of the list
 * @str: string to add to the list
 *
 * Return: the address of the new element or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)); 

	/* return null if malloc fails */
	if (new_node == NULL) 
		return (NULL);
	
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	
	return (new_node);
}
