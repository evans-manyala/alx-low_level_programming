#include "lists.h"
/**
 * add_nodeint - Function adds a new node at the beginning of the list_t.
 * @head: A pointer to a pointer for  the head node.
 * @n: Integer arguments.
 * Return: New Node to the beginning of list_t.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
