#include "lists.h"
/**
 * sum_listint - Function gets the sum of all the data of a linkedlist
 * @head: Pointer to the start node in the linked list.
 * Return: Sum of the all the data of the linked list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
