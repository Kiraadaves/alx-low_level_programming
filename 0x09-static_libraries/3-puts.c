#include <unistd.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: value to evaluate
 * Return: 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
