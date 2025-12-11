#include "main.h"

/**
 * close_fd - print error and exit when close fails
 * @fd: file descriptor that failed to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

void copy_fromf_tof(const char *from, const char *to)
{
	int fd_src, fd_dst;
	ssize_t rlen, wlen;
	char buff[1024];

	fd_src = open(from, O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	fd_dst = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		close_fd(fd_src);
		exit(99);
	}

}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_fromf_tof(av[1], av[2]);
	return (0);
}
