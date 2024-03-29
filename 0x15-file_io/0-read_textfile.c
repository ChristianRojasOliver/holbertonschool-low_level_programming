#include "main.h"
/**
 * read_textfile - this function read text on someone file
 * @filename: name of file
 * @letters: the number of length of text
 * Return: ssize_t structure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, idx, len;
	char *buf;

	buf = malloc(letters + 1);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
	{
		return (0);
	}

	len = read(fd, buf, letters);

	idx = write(STDOUT_FILENO, buf, len);

	close(fd);

	return (idx);
}
