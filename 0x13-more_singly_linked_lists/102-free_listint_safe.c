#include "lists.h"
/**
 * free_listint_safe - Function frees a linked list.
 * @h: Pointer to a pointer for the head node.
 * Return: Freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	listint_t *t;

	while (*h != NULL)
	{
		t = *h;
		*h = (*h)->next;
		t->next = NULL;

		free(t);
		x++;
	}
	return (x);
}
