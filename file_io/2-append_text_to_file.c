#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (close(fd) == -1)
			return (-1);
		return (1);
	}

	len = 0;
	while (text_content[len] != '\0')
		len++;

	written = write(fd, text_content, len);
	if (written != len)
	{
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}

