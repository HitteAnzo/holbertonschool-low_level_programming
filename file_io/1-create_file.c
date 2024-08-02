#include "main.h"

/**
 * create_file - Creates a file with specified name and writes text content
 * @filename: The name of the file to create.M.
 * @text_content: A NULL terminated string to write to the file.LP.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
