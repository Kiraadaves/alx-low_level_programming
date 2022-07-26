#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: storage char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	if (size == 0)
		return (NULL);

	j = malloc(sizeof(c) * size);

	if (j == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		j[i] = c;

	return (j);
}
