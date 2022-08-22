#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * POSIX standard output
 * @filename: file containig text
 * @letter: size of characters
 *
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t toread, towrite;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	toread = read(fd, buf, letters);
	close(fd);
	if (toread == -1)
	{
		free(buf);
		return (0);
	}
	towrite = write(STDOUT_FILENO, buf, toread);
	free(buf);
	if (toread != towrite)
		return (0);
	return (towrite);
}
