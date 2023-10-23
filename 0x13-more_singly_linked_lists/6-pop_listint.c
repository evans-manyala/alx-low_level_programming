#include "lists.h"
/**
 * pop_listint - Function deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head node of a linked_list.
 * Return: Tthe head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *t;
	int x;

	if (*head == NULL)
		return (0);

	t = *head;
	x = t->n;

	*head = (*head)->next;
	free(t);

	return (x);
}
