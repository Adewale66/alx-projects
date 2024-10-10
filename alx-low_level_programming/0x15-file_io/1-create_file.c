#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @content: content written to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *content)
{
	int fd, len = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (content == NULL)
		content = "";
	while (content[len])
		len++;
	bytes = write(fd, content, len);

	if (bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
