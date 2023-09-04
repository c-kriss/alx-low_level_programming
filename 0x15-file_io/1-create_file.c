#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Create a file and write content to it.
 * @filename: Name of the file to create.
 * @text_content: Content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);
	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
