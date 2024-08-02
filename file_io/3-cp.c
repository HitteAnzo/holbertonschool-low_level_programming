#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * handle_error - Handles errors by closing file descriptors and printing a message
 * @fd_s: Source file descriptor
 * @fd_d: Destination file descriptor
 * @error_code: Error code to exit with
 * @message: Error message to print
 *
 * Description: Closes file descriptors if they are open and prints an error
 * message to the standard error. Then, exits with the specified error code.
 */
void handle_error(int fd_s, int fd_d, int error_code, const char *message)
{
    if (fd_s != -1)
        close(fd_s);

    if (fd_d != -1)
        close(fd_d);

    dprintf(STDERR_FILENO, "%s\n", message);
    exit(error_code);
}

/**
 * main - Copies the content of one file to another
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Description: Copies the content from the file specified by argv[1] to the
 * file specified by argv[2]. Exits with specific codes and messages in case
 * of errors.
 *
 * Return: 0 on success, or exits with a specific error code
 */
int main(int argc, char *argv[])
{
    const char *f_from;
    const char *f_to;
    int fd_s, fd_d;
    char buf[1024];
    ssize_t nrd, nwr;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    f_from = argv[1];
    f_to = argv[2];

    fd_s = open(f_from, O_RDONLY);
    if (fd_s == -1)
    {
        handle_error(-1, -1, 98, "Error: Can't read from file");
    }

    fd_d = open(f_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_d == -1)
    {
        handle_error(fd_s, -1, 99, "Error: Can't write to file");
    }

    while ((nrd = read(fd_s, buf, sizeof(buf))) > 0)
    {
        nwr = write(fd_d, buf, nrd);
        if (nwr == -1)
        {
            handle_error(fd_s, fd_d, 99, "Error: Can't write to file");
        }
    }

    if (nrd == -1)
    {
        handle_error(fd_s, fd_d, 98, "Error: Can't read from file");
    }

    if (close(fd_s) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_s);
        exit(100);
    }

    if (close(fd_d) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_d);
        exit(100);
    }

    return (0);
}