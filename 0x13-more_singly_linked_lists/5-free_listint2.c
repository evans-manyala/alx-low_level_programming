#include "lists.h"
/**
 * free_listint2 - Function frees a listint_t linked list.
 * @head: Pointer to a pointer to the head node.
 */
void free_listint2(listint_t **head)
{
	listint_t *nextNode, *pos;

	if (head == NULL)
		return;
	pos = *head;

	while (pos != NULL)
	{
		nextNode = pos->next;
		free(pos);
		pos = nextNode;
	}

	*head = NULL;
}
