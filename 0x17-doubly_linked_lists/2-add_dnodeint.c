#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a linked list
 * @head: Double pointer to the head of the linked list
 * @n: Value of new node.
 * Return: New node added. Otherwise, NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
