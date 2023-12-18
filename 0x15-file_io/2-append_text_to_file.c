#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t res;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		res = write(fd, text_content, _strlen(text_content));
		if (res == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - counts string length
 * @str: pointer to the string to be counted
 * Return: the string length
*/

size_t _strlen(char *str)
{

	size_t len = 0;

	while (str[len])
		len++;

	return (len);
}
