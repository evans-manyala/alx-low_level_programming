#include "lists.h"

/**
 * free_list - Funcion frees list_t linkedlist
 * @head: Pointer to the start node.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
