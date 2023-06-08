#include "main.h"

/**
 * set_bit - setting a bit to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: for success 1, for failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
