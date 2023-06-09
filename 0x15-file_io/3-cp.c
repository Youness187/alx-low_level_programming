#include "main.h"
/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int in_fd, out_fd, is_, ois_, a, b;
	char buf[MAXSIZE];
	mode_t m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	in_fd = open(av[1], O_RDONLY);
	if (in_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	out_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, m);
	if (out_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		is_ = read(in_fd, buf, MAXSIZE);
		if (is_ == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (is_ > 0)
		{
			ois_ = write(out_fd, buf, (ssize_t) is_);
			if (ois_ == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (is_ > 0);
	a = close(in_fd), b = close(out_fd);
	if (a == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", in_fd), exit(100);
	if (b == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", out_fd), exit(100);
	return (0);
}

