#include "main.h"
/**
 * stlen - finds the length of a string
 * @c: pointer to string
 * Return: length of string
 */
int stlen(char *c)
{
	int i, count = 0;

	for (i = 0; c[i]; i++)
		count++;
	return (count);
}

/**
 * create_file - will create a file
 * @filename: name of file
 * @text_content: NULL terminated string to write the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t towrite = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		towrite = write(fd, text_content, stlen(text_content));
	close(fd);
	if (towrite == -1)
		return (-1);
	return (1);
}
