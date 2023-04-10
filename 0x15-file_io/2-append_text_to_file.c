#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append
 * @text_content: the string to add.
 * Return: 1 On success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_EXCL | O_APPEND, 0600);

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
