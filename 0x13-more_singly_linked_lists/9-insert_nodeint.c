#include "lists.h"
/**
 * insert_nodeint_at_index - Functions inserts a node at any given point.
 * @head: Point to a pointer for the start node:
 * @idx: Node index position.
 * @n: node arguments.
 * Return: New node inserted at the specified postiion.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *pos = *head;
	unsigned int x = 0;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		*head = newNode;
		return (newNode);
	}

	while (pos != NULL && x < idx - 1)
	{
		pos = pos->next;
		x++;
	}

	if (pos == NULL)
		return (NULL);

	newNode->next = pos->next;
	pos->next = newNode;

	return (newNode);
}
