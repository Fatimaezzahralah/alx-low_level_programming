#include <unistd.h>


/**
 * _putchar - writing c character to stdout
 * @c: The character have to be printed
 *
 * Return: 1 On success.
 * On error, is returned -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
