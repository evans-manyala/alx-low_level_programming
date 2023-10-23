#include "lists.h"
/**
 * add_nodeint_end - Function adds a new node at the end of linked list.
 * @head: Pointer to a pointer for the head node.
 * @n: No. of arguments.
 * Return: New node at the end of the current node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *endNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	endNode = *head;

	while (endNode->next != NULL)
	{
		endNode = endNode->next;
	}

	endNode->next = newNode;

	return (newNode);
}
