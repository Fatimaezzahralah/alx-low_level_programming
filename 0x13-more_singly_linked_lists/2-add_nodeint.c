#include "lists.h"

/**
 * add_nodeint - adding nodes at the start of a linked list
 * @head: first node in the list
 * @n: data of new node
 *
 * Return: pointer to the new node, or if it fail NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
