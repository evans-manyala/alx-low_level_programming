#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the node.
 * Return: Number of elements in the linkedlist.
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;
	const list_t *pos = h;

	while (pos != NULL)
	{
		cnt++;
		pos = pos->next;
	}
	return (cnt);
}
