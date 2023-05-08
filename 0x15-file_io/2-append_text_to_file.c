#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: filename
 * @text_content: text_content
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_st, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		write_st = write(fd, text_content, i);
		if (write_st != i)
			return (-1);
	}
	close(fd);
	return (1);
}

