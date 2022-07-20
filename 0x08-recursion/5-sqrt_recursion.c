#include "main.h"

/**
 * sqrt_check - check squaare root of c
 * @g: guess squareroot
 * @c: number to find square root
 *
 * Return: square root of c or -1
 */

int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion -returns natural square root of a number
 * @n: integer to find square root of
 *
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
