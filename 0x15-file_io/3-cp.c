#include "main.h"

/**
 * exit_stat - prints an error message
 * then exits with an exit value
 * @status: an exit status/value
 * @name: the file name/ the file
 * @fd: the file descriptor
 * Return: 0 On success
 */
int exit_stat(int status, char *name, int fd)
{
	switch (status)
	{
		/*error in number of arguments entered*/
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(status);
		/*file does not exist or cannot read from it*/
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
			exit(status);
		/*cannot create the file, or write into it*/
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
			exit(status);
		/*cannot close the file(fd)*/
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(status);
		default:
			return (0);
	}
}

/**
 * main - copies one file into another file
 * @argc: the number of arguments
 * @argv: a vector of pointers to arguments
 * Return: 0 on success, error_status on failure(97-100)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)/*validated number of args*/
		exit_stat(97, NULL, 0);
	/*open or create file to copy into*/
	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)/*error opening the file*/
		exit_stat(99, argv[2], 0);
	/*open file to copy from*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)/*error opening the file, doesnt exist*/
		exit_stat(98, argv[1], 0);

	while ((bytes_read = read(file_from, buffer, 1024)) != 0)
	{
		if (bytes_read == -1)/*error reading into buffer*/
			exit_stat(98, argv[1], 0);
		/*write buffer contents into file*/
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)/*error writing into file*/
			exit_stat(99, argv[2], 0);
	}

	/*error closing the file copying into*/
	close(file_to) == -1 ? (exit_stat(100, NULL, file_to)) : close(file_to);
	/*error closing the file copying from*/
	close(file_from) == -1 ? (exit_stat(100, NULL, file_from)) : close(file_from);
	return (0);
}
