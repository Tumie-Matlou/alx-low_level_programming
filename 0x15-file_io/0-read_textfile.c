#include "main.h"

/**
 * read_textfile - reads a text file & prints it to the POSIX stdout
 * @filename: the file to read  from
 * @letters: number of characters to read and print
 * Return: 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, bytes_read, bytes_written;

	if (filename == NULL)/*validate file to read*/
		return (0);
	fd = open(filename, O_RDONLY);/*open and read the file*/
	if (fd == -1)/*if error opening file*/
		return (0);

	buffer = malloc(sizeof(char) * letters);/*malloc for buffer*/
	if (buffer == NULL)/*malloc check*/
		return (0);
	/*read file contents into buffer*/
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)/*error reading into buffer*/
	{
		free(buffer); /*free memory*/
		close(fd);/*close file*/
		return (0);
	}
	/*write buffer contents into buffer*/
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)/*error writing buffer content to stdout*/
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_read);/*return bytes successfully read*/
}
