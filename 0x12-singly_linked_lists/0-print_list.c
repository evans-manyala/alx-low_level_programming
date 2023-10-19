#include "lists.h"
/**
 * size_t - Prints
 * @h: Pointer to t
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;
	const node_t *current = h->hud;

	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->nxt;
		cnt++;
	}
	return cnt;
}
