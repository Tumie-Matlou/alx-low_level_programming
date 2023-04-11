#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"

/**
 * exit_stat - prints an error message, then exits with exit value
 * @error: a number (exit value or file descriptor)
 * @name: file name
 * @fd: file descriptor
 * Return: 0 on success
 */

int exit_stat(int error, char *name, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - copies a file to another
 * @argc: arguments of function
 * @argv: arry of files
 * Return: 0 On success, 97-100 on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char *buffer[1024];

	if (argc != 3)
		exit_stat(97, NULL, 0);
	
	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		exit_stat(99, argv[2], 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_stat(98, argv[1], 0);

	while ((bytes_read = read(file_from, buffer, 1024)) != 0)
	{
		if (bytes_read == -1)
			exit_stat(98, argv[1], 0);
		
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			exit_stat(99, argv[2], 0);
	}

	close(file_to) == -1 ? (exit_stat(100, NULL, file_to)) : close(file_to);
	close(file_from) == -1 ? (exit_stat(100, NULL, file_from)) : close(file_from);
	return (0);
}
