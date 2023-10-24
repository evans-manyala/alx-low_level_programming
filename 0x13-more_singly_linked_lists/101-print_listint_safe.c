#include "lists.h"

/**
 * print_listint_safe - Function prints the number of nodes in a linked
 * list using a loop and handles infinite loops.
 * @head: Pointer to the head node in the linked list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	const listint_t *pos = head;
	const listint_t *nxtNode;

	while (pos != NULL)
	{
		if (pos->next == pos)
		{
			printf("** Error: Infinite loop detected in linked list **\n");
			exit(98);
		}

		printf("[%p] %d\n", (void *)pos, pos->n);
		nxtNode = pos->next;
		pos = nxtNode;
		x++;
	}
	return (x);
}
