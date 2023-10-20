#include "lists.h"

/**
 * main - function prints the poem "You're beat! and yet,
 * you must allow, \nI bore my house upon my back!\n".
 * Return: 0 if successful.
 */

int main(void)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	n->str = POEM;
	n->next = NULL;

	list_t *head = n;

	while (head != NULL)
	{
		printf("%s", head->str);
		head = head->next;
	}

	free_list(head);

	return (0);

}
