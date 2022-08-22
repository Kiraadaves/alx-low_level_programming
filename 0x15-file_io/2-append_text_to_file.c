#include "main.h"
/**
 * stlen - get length of string
 * @c: pointer to string;
 * Return: number of string characters
 */
int stlen(char *c)
{
	int i = 0;
	int count = 0;

	while (c[i])
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: i on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t towrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		towrite = write(fd, text_content, stlen(text_content));
	close(fd);
	if (towrite == -1)
		return (-1);
	return (1);
}
