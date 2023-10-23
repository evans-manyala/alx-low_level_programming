#include "lists.h"
/**
 * get_nodeint_at_index - Function returns the nth node of a linkedlist.
 * @head: Pointer to the head node in the linked list.
 * @index: Position of a node within a linked list.
 * Return: The current node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pos = head;
	unsigned int x = 0;

	while (pos != NULL && x < index)
	{
		pos = pos->next;
		x++;
	}

	if (pos == NULL)
		return (NULL);

	return (pos);
}
