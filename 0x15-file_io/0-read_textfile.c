#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#define BUFFER 1024

/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: name of file to read
 * @letters: letters to print
 * Return: 0 On failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t bytes_read;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	
	bytes_read = read(fd, buffer , letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);
	return (bytes_read);
}
