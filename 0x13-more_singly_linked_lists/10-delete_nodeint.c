#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes a node at specified index
 * @head: Pointer to a pointer for the start node.
 * @index: Index of the node to be deleted.
 * Return: 1 is successful, otherwise -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int x;

	if (*head == NULL)
		return (-1);
	curr = *head;
	prev = NULL;

	for (x = 0; x < index && curr != NULL; x++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);
	if (prev == NULL)
		*head = curr->next;
	else
		prev->next = curr->next;

	free(curr);

	return (1);
}
