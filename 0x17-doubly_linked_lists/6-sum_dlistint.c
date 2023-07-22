#include "lists.h"

/**
 * sum_dlistint - Sum list data
 *
 * @head: head 
 * Return: data sum
 i*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
