#include "main.h"

/**
 *_memcpy - coping memory area function
 *@dest: stored memory
 *@src: copied memory
 *@n: number of bytes 
 *
 *Return: copied memory with byted changed n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
