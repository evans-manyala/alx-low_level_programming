#include "lists.h"
/**
 * reverse_listint - Function reverses a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *pos, *h;

	h = *head;

	if (*head == NULL || h->next == NULL)
		return (*head);
	start = *head;
	pos = (*head)->next;

	reverse_listint(&pos);

	start->next->next = start;
	start->next = NULL;

	*head = pos;

	return (*head);
}
