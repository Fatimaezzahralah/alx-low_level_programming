#include <stdlib.h>
#include "lists.h"

/**
 * list_len - linked list element number
 * @h: pointer to list_t list
 *
 * Return: h element number
 */
size_t list_len(const list_t *h)
{
	size_t r = 0;

	while (h)
	{
		r++;
		h = h->next;
	}
	return (r);
}
