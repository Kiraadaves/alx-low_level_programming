#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - function that takes function pointer as argument
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to a funtion
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}
