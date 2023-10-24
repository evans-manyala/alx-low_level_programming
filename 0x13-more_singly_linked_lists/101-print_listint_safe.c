#include "lists.h"
/**
 * print_listint_safe - Function prints number of nodes in a linked
 * list using a loop.
 * @head: Pointer to the head node in the linked list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	const listint_t *pos = head;
	listint_t *newNode;

	while (pos != NULL)
	{
		printf("%d\n", pos->n);

		newNode = pos->next;

		if (newNode == pos)
		{
			printf("** Error: Infinite loop detected in linkedlist **\n");
			exit(98);
		}

		pos = newNode;
		x++;
	}
	return (x);
}
