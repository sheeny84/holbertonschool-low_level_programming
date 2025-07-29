#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of a list
 * @head: pointer to the pointer at the head of the list
 * @str: string to add to the list
 *
 * Return: the address of the new element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));

	/* add data to new node */
	if (new_node != NULL)
		new_node->str = strdup(str);
	/* free memory if malloc failed */
	if (temp == NULL || new_node == NULL || new_node->str == NULL)
	{
		free(new_node);
		free(temp);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;
	/* check if new node is the first node in the list */
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		/* go to the end of the list */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* add the new node at the end */
		temp->next = new_node;
	}
	/* free temp memory */
	free(temp->str);
	free(temp->next);
	free(temp);
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
