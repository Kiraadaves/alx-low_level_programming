#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to the first xter of a string
 * @n: number of arguments
 * @...: other possible arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		;
	}
	for (i = 0; i < n; i++)
	{
	int x = va_arg(args, int);

	printf("%d", x);
	if (i != (n - 1))
	printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
