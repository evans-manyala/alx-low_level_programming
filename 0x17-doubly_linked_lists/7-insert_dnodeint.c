#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @head: Double pointer to the head node.
 * @idx: Desired index.
 * @n: Value for the new node that
 * sets the pounters to NULL.
 * Return: New node at given position
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
				     unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *newNode, *pos;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	pos = *head;

	while (pos && x < idx)
	{
		pos = pos->next;
		x++;
	}
	if (!pos && idx != 0)
		return (NULL);
	if (!*head)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	else if (idx == 0)
	{
		newNode->next = *head;
		if (*head)
			(*head)->prev = newNode;
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	else
	{
		newNode->next = pos;
		newNode->prev = pos->prev;
		pos->prev->next = newNode;
		pos->prev = newNode;
	}
	return (newNode);
}
