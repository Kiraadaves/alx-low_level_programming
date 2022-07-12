#include <unistd.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: value to evaluate
 * Return: 0
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[1]);
		l++;
	}
	_putchar('\n');
}
