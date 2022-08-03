#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -returns index of the first element
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: -1 if no elemet matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
