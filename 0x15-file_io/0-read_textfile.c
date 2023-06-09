#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reading the file print to STDOUT
 * @filename: read text file
 * @letters: number of letters read
 * Return: actual number of bytes read and printed w-.
 *         when function fails or filename is NULL 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
