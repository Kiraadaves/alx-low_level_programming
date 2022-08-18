#include "main.h"
/**
 * _putchar - prints a character to standard output
 * @c: character to print
 * Return: character on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
