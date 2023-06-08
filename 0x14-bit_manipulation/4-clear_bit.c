#include "main.h"

/**
 * clear_bit - setting value of an indexed bit to 0
 * @n: number to change
 * @index: index of bit to clear
 *
 * Return: for success 1, for failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
