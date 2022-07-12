#include <stdio.h>
#include "main.h"

/**
 * swap_int - this swaps values of integers
 * @a: integer
 * @b: integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
