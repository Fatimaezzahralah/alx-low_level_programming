#include "main.h"

/**
 * create_file - Creating a file.
 * @filename: pointing the name of the file have to be created.
 * @text_content: A pointer to a string to write
 *
 * Return: -1 If the function fails. 1 Otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;
	/*  Check if the filename is NULL */
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
