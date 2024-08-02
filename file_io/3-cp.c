#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * errors - handle errors
 * @fd_s: source file descriptor
 * @fd_d: destination file descriptor
 * @argv: array of arguments
 */
void errors(int fd_s, int fd_d, char *argv[])
{
	if (fd_s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_s);
		exit(99);
	}
}

/**
 * main - copies content from one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_s, fd_d;
	char buf[1024];
	ssize_t nrd, nwr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_s = open(argv[1], O_RDONLY);
	fd_d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	errors(fd_s, fd_d, argv);
	while ((nrd = read(fd_s, buf, 1024)) > 0)
	{
		nwr = write(fd_d, buf, nrd);
		if (nwr != nrd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_s);
			close(fd_d);
			exit(99);
		}
	}
	if (nrd == -1 || close(fd_s) == -1 || close(fd_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", nrd == -1 ? fd_s : fd_d);
		exit(100);
	}
	return (0);
}
