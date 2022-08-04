#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of arguments
 * @n: number of arguments left after first argument
 * Return: 0 is n is 0 or return sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int count = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, unsigned int);

		count = count + x;
	}
	va_end(args);
	return (count);
}
