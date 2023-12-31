#include "lists.h"
/**
 * add_node_end - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *t;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = _strlen(str);
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		t = *head;

		while (t->next != NULL)
			t = t->next;
		t->next = new_n;
	}

	return (new_n);
}
