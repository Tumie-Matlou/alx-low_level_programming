#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: string to write in the file
 * Return: 1 On success annd -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (1);
}
