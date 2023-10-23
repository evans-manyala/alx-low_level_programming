#include "lists.h"
/**
 * listint_len - Function returns the no. of elements in a linkedlist
 * @h: Pointer to the head node.
 * Return: No. of elements in the linkedlist.
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
