#include "main.h"

/**
 * _memset - the block is fill of memory with specific values
 * @s: starts address of the memory that have to be filled
 * @b: value desired
 * @n: changed bytes number
 *
 * Return: array changed with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
