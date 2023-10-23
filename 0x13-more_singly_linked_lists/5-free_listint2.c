#include "lists.h"
/**
 * free_listint2 - Function frees a listint_t linked list.
 * @head: Pointer to a pointer to the head node.
 */
void free_listint2(listint_t **head)
{
	listint_t *nextNode;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		free(*head);
		*head = nextNode;
	}
}
