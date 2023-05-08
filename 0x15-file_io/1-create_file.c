#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename:  is the name of the file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_st, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write_st = write(fd, text_content, i);
		if (write_st == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

