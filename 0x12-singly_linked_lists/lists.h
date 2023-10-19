#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct node - Defines the node
 * @nxt: defines the next item
 * @d: data value.
 */

typedef struct node
{
	int d;
	struct node *nxt;
} node_t;

/**
 * struct list - Defines the list
 * @hud: defines the head of the list.
 */

typedef struct list
{
	node_t *hud;
} list_t;

size_t print_list(const list_t *h);

#endif

