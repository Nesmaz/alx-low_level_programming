#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * error_handler - handles errors
 * @err: the exit number
 * @str: pointer to both files
 * @fd: the file descriptor
 * Return: 0 indecates success
*/
int error_handler(int err, char *str, int fd)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
		default:
			return (0);
	}
	exit(err);
}
/**
 * main - entry point
 * @argc: the count of arguments
 * @argv: pointer to the array of vectors
 * Return: 0 indecates success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_status, write_status;
	char buff[1024];

	if (argc != 3)
		error_handler(97, NULL, 0);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_handler(98, argv[1], 0);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		error_handler(99, argv[2], 0);
	while ((read_status = read(file_from, buff, 1024)) > 0)
	{
		write_status = write(file_to, buff, read_status);
		if (write_status == -1)
			error_handler(99, argv[2], 0);
	}
	if (read_status == -1)
		error_handler(98, argv[1], 0);
	if (close(file_from) == -1)
		error_handler(100, NULL, file_from);
	if (close(file_to) == -1)
		error_handler(100, NULL, file_to);
	return (0);
}
