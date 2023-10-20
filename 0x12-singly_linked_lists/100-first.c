#include "lists.h"

/**
 * poem - function prints the poem "You're beat! and yet,
 * you must allow, \nI bore my house upon my back!\n".
 */
void poem(void)
{
	list_t *head = NULL, *n;

	n = malloc(sizeof(list_t));
	n->str = POEM;
	n->next = NULL;

	head = n;

	while (head != NULL)
	{
		printf("%s", head->str);
		head = head->next;
	}

	free_list(head);
}
