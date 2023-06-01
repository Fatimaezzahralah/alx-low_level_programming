#include <stdio.h>
#include "lists.h"

/**
 * print_list - printing the total elements of the linked list
 * @h: pointer to the list_t list to be printed
 *
 * Return: printed nodes number
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		z++;
	}

	return (z);
}
