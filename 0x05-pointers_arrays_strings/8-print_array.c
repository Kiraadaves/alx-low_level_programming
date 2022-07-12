#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array input
 * @n: array function parameter
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
