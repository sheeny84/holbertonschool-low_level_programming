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
	list_t *temp;
	if (head != NULL)
	{	
		/* iterate through the list */
		while (head->next != NULL)
		{
			temp = head->next;
			/* free the node from memory */
			free(head->str);
			free(head);
			/* set head to the next node */
			head = temp;
		}
		/* need to free the last head node */
		free(head->str);
		free(head);
	}
}
