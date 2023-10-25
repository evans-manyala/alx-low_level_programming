#include "lists.h"

/**
 * free_listhelper - Helper function to free a linked list
 * @head: start node so of a list.
 */

void free_listhelper(listh_s **head)
{
	listh_s *t, *pos;

	if (head != NULL)
	{
		pos = *head;

		while ((t = pos) != NULL)
		{
			pos = pos->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Function prints the number of nodes in a linked
 * list using a loop and handles infinite loops.
 * @head: Pointer to the head node in the linked list.
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	listh_s *headptr, *nw, *s;

	headptr = NULL;
	while (head != NULL)
	{
		nw = malloc(sizeof(listh_s));

		if (nw == NULL)
			exit(98);
		nw->ptr = (void *)head;
		nw->next = headptr;
		headptr = nw;

		s = headptr;

		while (s->next != NULL)
		{
			s = s->next;

			if (head == s->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listhelper(&headptr);
				return (x);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		x++;
	}
	free_listhelper(&headptr);
	return (x);
}
