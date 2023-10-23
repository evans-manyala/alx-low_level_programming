#include "lists.h"
/**
 * free_listint - Function frees the linkedlist.
 * @head: Pointer to pointer for the head node.
 */
void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head != NULL)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
}
