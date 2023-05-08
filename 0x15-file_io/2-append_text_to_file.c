#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append
 * @text_content: the data string to append/add
 * Return: 1 On success and -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t bytes_written;

	if (filename == NULL)/*validate file*/
		return (-1);
	if (text_content == NULL)/*validate string data*/
		text_content = "";
	/*tag to not create new file if one exist alread*/
	/*tag to append data into the existing file*/
	fd = open(filename, O_RDWR | O_EXCL | O_APPEND, 0600);
	if (fd == -1)/*error opening file*/
		return (-1);
	length = strlen(text_content);
	/*write data string into the file*/
	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)/*error writing into the file*/
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
