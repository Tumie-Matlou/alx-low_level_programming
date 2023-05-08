#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: the data string to write within the file
 * Return: 1 On success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t bytes_written;

	if (filename == NULL)/*validate file name*/
		return (-1);
	if (text_content == NULL)
		text_content = "";
	/*admin read-write permission, truncate if exists, octal 0600 rights*/
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)/*error creating/opening file*/
		return (-1);
	length = strlen(text_content);
	/*write text_content into new file*/
	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)/*error writing into file*/
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
