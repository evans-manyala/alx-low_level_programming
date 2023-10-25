#include "lists.h"
/**
 * find_listint_loop - Function finds loop in a linked list.
 * @head: Pointer to the start node of linked list.
 * Return: s start of the loop in the linked list.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f = head;

	while (f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next;

		if (s == f)
			break;
	}

	if (f == NULL || f->next == NULL)
		return (NULL);
	s = head;

	while (s != f)
	{
		s = s->next;
		f = f->next;
	}

	return (s);
}
