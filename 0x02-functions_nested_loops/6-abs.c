#include "main.h"
/**
 * int_abs - computes the absolute value of an integer
 *
 * @n: variable that stores the integer
 *
 * Return: 0 for success
 */
int_abs(int n)
{
	if (n < 0)
	{
	n = (-1) * n;
	_putchar(n);
	}
	_putchar('\n');
}
