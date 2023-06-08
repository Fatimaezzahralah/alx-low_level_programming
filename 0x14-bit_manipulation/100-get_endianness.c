#include "main.h"

/**
 * get_endianness - checks if it's big or no
 * Return: for big 0, for little 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
