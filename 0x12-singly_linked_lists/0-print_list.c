#include "lists.h"
/**
 * print_list -  Prints all the elements of a linked list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;
	const list_t *pos = h;

	while (pos != NULL)
	{
		if (pos->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", pos->str);
		pos = pos->next;
		cnt++;
	}
	return (cnt);
}
