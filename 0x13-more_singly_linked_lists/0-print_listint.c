#include "lists.h"
/**
 * print_listint - Function prints all elements of linked list
 * @h: Pointer to the linkedlist head.
 * Return: Elements in the linked_list.
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
