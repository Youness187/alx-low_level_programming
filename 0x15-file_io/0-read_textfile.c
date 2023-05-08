#include "main.h"
/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t c_read, c_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	c_read = read(fd, buffer, letters);
	if (c_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	c_write = write(STDOUT_FILENO, buffer, c_read);
	if (c_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (c_read);
}

