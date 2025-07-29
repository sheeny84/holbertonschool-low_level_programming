#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

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

	/* add data to new node */
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;

	/* update head to point to new node */
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - return the length of a string
 * @str: string
 *
 * Return: length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
