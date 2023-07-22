#include "lists.h"

/**
 * get_dnodeint_at_index - nth node of dlistint_t linked list.
 * @head: head
 * @index: index of the node searching for, starts from 0
 * Return: nth node or null.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
